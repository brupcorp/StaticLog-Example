#ifndef Unit2H
#define Unit2H

#include <vcl.h>
#include "Classes.hpp"
#include "Controls.hpp"
#include "Dialogs.hpp"
#include "StdCtrls.hpp"
#include "ComCtrls.hpp"

class TForm2 : public TForm {
  __published:
	TRichEdit *RichEdit1;
  private:
  public:
    EVENT TForm2(TComponent* Owner);
};

extern PACKAGE TForm2* Form2;

#endif

