#ifndef LOGDEVICEHDR
#define LOGDEVICEHDR

class LogDevice{
  public:
  	virtual void out(const char* text) = 0; // abstrakt. muss überschrieben werden von einer subclass
};

#endif
 
