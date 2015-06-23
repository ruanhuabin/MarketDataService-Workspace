#include <boost/timer/timer.hpp>
#include <boost/foreach.hpp>
#include "logger.h"
#include "Param.h"
#include "cmdParser.h"
#include "XTPHeader.h"
#include "XTPReader.h"
#include "TID.h"

namespace tid {
  const int first_order = 4408;
  const int second_order = 4411;
  const int first_trade = 4413;
  const int last_package = 157618;
  const int first_timeout_after_order = 43897;

  const int testing_id = 4432;
}

int main(int argc, char **argv) {
  boost::timer::auto_cpu_timer t;

  /// set logger
  Logger::instance().init("xtp");

  /// get command line arguments
  CMDParser cmdPaser(argc, argv);

  /// read configuration file
  Param config;
  config.read(cmdPaser.getParfilePath());

  INFO() << "Print the configuration:";
  config.print();

  XTPReader xtpReader(config.getInDataPath());

  std::vector<XTPPackage> xtps = xtpReader.readTo(tid::first_timeout_after_order);
  DEBUG() << "xtp size: " << xtps.size();

  int count = 0;
  BOOST_FOREACH(XTPPackage &xtp, xtps) {
    DEBUG();
    DEBUG() << format("ID[%d]") % count++;

    XTPHeader header = xtp.getHeader();
    boost::fusion::for_each(header, big_to_little_endian_converter());
    //header.print();

    TID *tid = createTid(header);
    if (tid == NULL) {
      WARNING() << format("[WARNING]: cannot find find tid: %#010x") % header.Tid;
    }
    tid->read(xtp.getContent());
    //tid->print();
    tid->process();
    delete tid;
  }

  INFO() << "program exit normally";
  return 0;
}


