//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal.h"
#include "UCancion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Ccancion *Canc;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Canc=new Ccancion();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Canc->ModificarNombreCancion(ENCancion->Text);
	Canc->ModificarAutor(EAutor->Text);
	Canc->ModificarAño(StrToInt(EAño->Text));
	Canc->ModificarGenero(EGenero->Text);
	ENCancion->Text="";
	EAutor->Text="";
	EAño->Text="";
	EGenero->Text="";

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ERNCancion->Text=Canc->ImprimirCancion();
	ERAutor->Text=Canc->ImprimirAutor();
	ERAño->Text=Canc->ImprimirAño();
	ERGenero->Text=Canc->ImprimirGenero();
}
//---------------------------------------------------------------------------
