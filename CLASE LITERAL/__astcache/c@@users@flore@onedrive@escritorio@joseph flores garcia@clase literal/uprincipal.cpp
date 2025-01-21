//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include "Literal.h"
#pragma resource "*.dfm"
TForm1 *Form1;
Literal *literal;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    literal=new Literal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    ELiteral->Text=literal->numeroALiteral(StrToLong(ENumero->Text));
}
//---------------------------------------------------------------------------
