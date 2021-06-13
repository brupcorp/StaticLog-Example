#ifndef Unit1H
#define Unit1H

#include <vcl.h>
#include "Classes.hpp"
#include "Controls.hpp"
#include "Dialogs.hpp"
#include "StdCtrls.hpp"

class TForm1 : public TForm {
  __published:
	TButton *Button1;
	TEdit *Edit1;
	void __fastcall Button1Click(TObject *Sender);
  private:
  public:
    EVENT TForm1(TComponent* Owner);
};

extern PACKAGE TForm1* Form1;

#endif

