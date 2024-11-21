//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Practica.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
byte Sum_Dig(Cardinal x)
{
 byte s;
 if (x < 9) {
	 s = x;
 }else{
	 byte d = x % 10;
	 s = Sum_Dig(x / 10 );
	 s = s + d;
 }

 return s;
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Edit2->Text = Sum_Dig(Edit1->Text.ToInt());
}
//---------------------------------------------------------------------------
