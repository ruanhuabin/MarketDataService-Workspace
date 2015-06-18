#include <boost/timer/timer.hpp>
#include "logger.h"
#include "Param.h"
#include "cmdParser.h"
#include "XtpXmlReader.h"

int main(int argc, char **argv) {
  boost::timer::auto_cpu_timer t;

  /// set logger
  Logger::instance().init("xml");

  /// get command line arguments
  CMDParser cmdPaser(argc, argv);

  /// read configuration file
  Param config;
  config.read(cmdPaser.getParfilePath());

  INFO() << "Print the configuration:";
  config.print();

  try {
    XtpXmlReader xtpXmlReader(config.getXtpXmlPath());
    xtpXmlReader.readPackages();
    xtpXmlReader.printPackages();
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
  }

  INFO() << "program exit normally";
  return 0;
}

