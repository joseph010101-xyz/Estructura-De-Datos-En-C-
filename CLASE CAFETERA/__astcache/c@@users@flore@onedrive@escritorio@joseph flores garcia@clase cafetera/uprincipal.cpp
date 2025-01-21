//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal.h"
#include "UCafetera.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Ccafetera *Caf;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Caf=new Ccafetera();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	EResultado->Text="1000";
	//StrToInt(Caf->LlenarCafetera());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	EResultado->Text=Caf->ServirTaza(StrToInt(ECafe2->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	EResultado->Text=Caf->VaciarCafetera();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
    EResultado->Text=Caf->AgregarCafe(StrToInt(ECafe1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	ECMax->Text=Caf->ImprimirCapacidadMaxima();
	ECActual->Text=Caf->ImprimirCantidadActual();
	ETemperatura->Text="80";
    //Caf->ImprimirTemperatura()
}
//---------------------------------------------------------------------------


