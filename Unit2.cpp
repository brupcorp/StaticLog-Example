#include "Unit2.h"

#include "Log.h"
#include "RELogDevice.h"

#pragma link "ComCtrls"
#pragma resource "*.dfm"
TForm2* Form2;

EVENT TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
	Log::ld = new RELogDevice(this->RichEdit1);
}

