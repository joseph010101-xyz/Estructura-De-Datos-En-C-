//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UPersona.h"
#include "UPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CPersona *Per;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    Per=new CPersona();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    EResultado->Text=Per->Edad(StrToInt(EEdad->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	EResultado->Text=Per->CalcularIMC(StrToFloat(EPeso->Text),StrToFloat(EAltura->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Per->EsMayorDeEdad(StrToInt(EDAD->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Per->SetNombre(ENombre->Text);
	Per->SetFechaDeNacimiento(EFDN->Text);
	Per->SetLugarDeNacimiento(ELDN->Text);
	Per->SetSexo(ESexo->Text);
	Per->SetPeso(StrToFloat(EEPeso->Text));
	Per->SetAltura(StrToFloat(EEAltura->Text));
	//ENombre->Text="";
	//EFDN->Text="";
	//ELDN->Text="";
	//ESexo->Text="";
	//EPeso->Text="";
	//EAltura->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	ERNombre->Text=Per->GetNombre();
	ERFDN->Text=Per->GetFechaDeNacimiento();
	ERLDN->Text=Per->GetLugarDeNacimiento();
	ERSexo->Text=Per->GetSexo();
	ERPeso->Text=Per->GetPeso();
	ERAltura->Text=Per->GetAltura();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
	ECI->Text="13724897";
}
//---------------------------------------------------------------------------

