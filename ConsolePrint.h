#ifndef CONSOLEPRINT_H_
#define CONSOLEPRINT_H_
#include "./Print.h"
#include <string>

class ConsolePrint : Print {
     public:
         void Print(string message);
}
