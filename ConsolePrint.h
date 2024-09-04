#ifndef CONSOLEPRINT_H_
#define CONSOLEPRINT_H_
#endif  // CONSOLEPRINT_H_

#include <string>
#include "./Print.h"

class ConsolePrint : Print {
 public:
  void PrintMessage(std::string message);
};
