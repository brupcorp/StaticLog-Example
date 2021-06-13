#include <vcl.h>
USERES("Project1.res");
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit2.cpp", Form2);
USEUNIT("LogDevice.cpp");
USEUNIT("RELogDevice.cpp");
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
  try{
    Application->Initialize();
    Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->Run();
  } catch (Exception& e) { Application->ShowException(&e); }
  return 0;
}

