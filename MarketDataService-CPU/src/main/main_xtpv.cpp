#include <boost/timer/timer.hpp>
#include "logger.h"
#include "Param.h"
#include "cmdParser.h"
#include "XTPHeader.h"
#include "XTPReader.h"

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

  XTPHeader header = xtpReader.readXTPHeader();
  header.print();

  INFO() << "program exit normally";
  return 0;
}


