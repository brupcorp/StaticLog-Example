#ifndef LOGHDR
#define LOGHDR

#include "LogDevice.h"

class Log{
  public:
  	static LogDevice* ld;
  	static void out(const char* text);
};

#endif
 
