//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
float x = StrToFloat(Edit1->Text);
float s=0;
for (int k=1; k<=7; k++){
	s=s+pow(x,k+1)/(pow(2,k)+k);
}
Edit2->Text=FormatFloat("0.000",s);
}


//---------------------------------------------------------------------------
