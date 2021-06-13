#include "Unit1.h"

#pragma resource "*.dfm"
TForm1* Form1;

#include "Log.h"

EVENT TForm1::TForm1(TComponent* Owner) : TForm(Owner) {

}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Log::out(Edit1->Text.c_str());
}
//---------------------------------------------------------------------------
 
