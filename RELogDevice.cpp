#include "RELogDevice.h"

RELogDevice::RELogDevice(TRichEdit* derEdit){
	logEdit = derEdit;
}

void RELogDevice::out(const char* text){
	logEdit->Lines->Add(text);
}
