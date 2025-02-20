//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal.h"
#include "UFecha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CFecha *fecha;
CFecha *fechaDos;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	fecha=new CFecha();
	fechaDos=new CFecha();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	fecha->SetDia(StrToInt(EditDia->Text));
	fecha->SetMes(StrToInt(EditMes->Text));
	fecha->SetA�o(StrToInt(EditA�o->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	EResultado->Text=fecha->EsBisiesto();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	EResultado->Text=fecha->DiasMes(StrToInt(EMes->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	ECorto->Text=fecha->Corto();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button5Click(TObject *Sender)
{
	fecha->SetA�o(StrToInt(EA�o1->Text));
	fecha->SetMes(StrToInt(EMes1->Text));
	fecha->SetDia(StrToInt(EDia1->Text));
}
//--------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
	fechaDos->SetA�o(StrToInt(EA�o2->Text));
	fechaDos->SetMes(StrToInt(EMes2->Text));
	fechaDos->SetDia(StrToInt(EDia2->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	ETranscurrido->Text=fecha->DiasTranscurridos(*fecha,*fechaDos);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
    EResultado->Text=fecha->A�oBisiesto(StrToInt(EA�oBisiesto->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	int DiaSemana=fecha->DiaSemana();
	String dias[7]={"domingo","lunes","martes","miercoles","jueves","viernes","sabado"};
	EResultado->Text=dias[DiaSemana];
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
    EResultado->Text=fecha->Largo();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
    EResultado->Text=fecha->EstacionDelA�o();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
	fecha->SetA�o(StrToInt(EA�o1->Text));
	fecha->SetMes(StrToInt(EMes1->Text));
	fecha->SetDia(StrToInt(EDia1->Text));

	fechaDos->SetA�o(StrToInt(EA�o2->Text));
	fechaDos->SetMes(StrToInt(EMes2->Text));
	fechaDos->SetDia(StrToInt(EDia2->Text));
	int diasfecha1=fecha->convertirADias();
	int diasfecha2=fechaDos->convertirADias();
	int diferenciaDias=abs(diasfecha1-diasfecha2);
	EResultado->Text= "Dias entre las dos fechas:"+IntToStr(diferenciaDias);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
    EResultado->Text=fecha->GetDia()+1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
    EResultado->Text=fecha->GetDia()-1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
	CFecha fechaOriginal;
	fechaOriginal.SetDia(StrToInt(EditDia->Text));
	fechaOriginal.SetMes(StrToInt(EditMes->Text));
	fechaOriginal.SetA�o(StrToInt(EditA�o->Text));
	CFecha fechaCopia=fechaOriginal.Copia();
	ShowMessage("Fecha copiada:"+IntToStr(fechaCopia.GetDia())+"/"+IntToStr(fechaCopia.GetMes())+"/"+IntToStr(fechaCopia.GetA�o()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{
	CFecha fecha1;
	CFecha fecha2;
	fecha1.SetA�o(StrToInt(EA�o1->Text));
	fecha1.SetMes(StrToInt(EMes1->Text));
	fecha1.SetDia(StrToInt(EDia1->Text));

	fecha2.SetA�o(StrToInt(EA�o2->Text));
	fecha2.SetMes(StrToInt(EMes2->Text));
	fecha2.SetDia(StrToInt(EDia2->Text));
	if (fecha1.igualQue(fecha2)) {
		ShowMessage("Las fechas son iguales");
	}else if (fecha1.menorQue(fecha2)) {
			ShowMessage("La fecha 1 es menor que fecha 2");
		  }else{
			  ShowMessage("Fecha 1 es mayor que Fecha 2");
          }
}
//---------------------------------------------------------------------------

