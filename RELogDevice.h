#ifndef RELOGDEVHDR
#define RELOGDEVHDR

#include "LogDevice.h"
#include "ComCtrls.hpp" // header für richedit

class RELogDevice : public LogDevice{
  private:
  	TRichEdit* logEdit;
  public:
  	RELogDevice(TRichEdit* derEdit);
    void out(const char* text);

};

#endif
