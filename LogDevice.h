#ifndef LOGDEVICEHDR
#define LOGDEVICEHDR

class LogDevice{
  public:
  	virtual void out(const char* text) = 0; // abstrakt. muss �berschrieben werden von einer subclass
};

#endif
 
