//---------------------------------------------------------------------------

#pragma hdrstop

#include <string>
#include "UFecha.h"
#include <System.SysUtils.hpp>
//---------------------------------------------------------------------------
 CFecha::CFecha(){
	Dia=1;
	Mes=1;
	A�o=1900;
}
CFecha::CFecha(int Dia,int Mes,int A�o){
	this->Dia=Dia;
	this->Mes=Mes;
	this->A�o=A�o;
}
void CFecha::SetDia(int dia){
	if (dia>0 && dia<=31) {
		Dia=dia;
	}else{
		ShowMessage("No Esta Dentro Del Rango De los Dias Del Mes");
	}
}
void CFecha::SetMes(int mes){
	if (mes>0 && mes<=12){
		Mes=mes;
	}else{
		ShowMessage("No Esta Dentro Del Rango De los Meses Del A�o");
	}
}
void CFecha::SetA�o(int a�o){
	if (a�o>=1900 && a�o<=2050 ) {
		A�o=a�o;
	}else{
		ShowMessage("No esta dentro del rango ");
	}
}
int CFecha::GetDia(){
	return Dia;
}
int CFecha::GetMes(){
	return Mes;
}
int CFecha::GetA�o(){
    return A�o;
}
String CFecha::EsBisiesto(){
	bool esbisiesto=((GetA�o() % 4 ==0 && GetA�o() % 100 !=0) || (GetA�o() % 400==0));
	String resultado;
	(esbisiesto)?resultado="Es Bisiesto":resultado="No Es Bisiesto";
	return resultado;
}
int CFecha::DiasMes(int mes){
	const int DiasPorMes[]={31,28,31,30,31,30,31,31,30,31,30,31};
	bool esbisiesto=((GetA�o() % 4 ==0 && GetA�o() % 100 !=0) || (GetA�o() % 400==0));
	if (mes>12 && mes<1) {
		ShowMessage("El Mes Ingresado No Existe");
	}
	if (mes==2) {
		return esbisiesto ? 29 : 28;
	}else{
		return DiasPorMes[mes -1];
	}
}
String CFecha::Corto(){
	String resultado;
	resultado=IntToStr(GetA�o())+"-"+IntToStr(GetMes())+"-"+IntToStr(GetDia());
	return resultado;
}
String CFecha::DiasTranscurridos(CFecha fecha,CFecha fechaDos){
	int a�oMayor, a�oMenor, a�o, mes, dia;
	int mesResta, diaResta;
	if (fecha.GetA�o() > fechaDos.GetA�o()) {
		a�oMayor = fecha.GetA�o();
		a�oMenor = fechaDos.GetA�o();
	} else {
		a�oMayor = fechaDos.GetA�o();
		a�oMenor = fecha.GetA�o();
	}
	a�o = a�oMayor - a�oMenor;
	mesResta = abs(fecha.GetMes()-fechaDos.GetMes());
	diaResta = abs(fecha.GetDia()- fechaDos.GetDia());
	mes = a�o * 12 + mesResta;
	if (fecha.GetDia()< fechaDos.GetDia()){
		mes--;
		dia = 30 - diaResta;
	} else {
		dia = diaResta;
	}
	int diasTotales = a�o * 365 + mes * 30 + dia;
	String mensaje = IntToStr(a�o) + " a�os, " + IntToStr(mes) + " meses, " + IntToStr(dia) + " d�as";
	return mensaje;
}
bool CFecha::A�oBisiesto(int a�o){
	String resultado;
	if (a�o>=1900 && a�o<=2050) {
		bool esbisiesto=((a�o % 4 ==0 && a�o % 100 !=0) || (a�o % 400==0));

		   (esbisiesto)?resultado="Es Bisiesto":resultado="No Es Bisiesto";

	}else{
		ShowMessage("El A�o Ingresado Esta Fuera Del Rango");
	}
	//return resultado;
}
int CFecha::DiaSemana(){
	int a=GetA�o();
	int m=GetMes();
	int d=GetDia();
	if (m==1||m==2) {
		m+=12;
		a--;
	}
	int k=a%100;
	int j=a/100;
	int h=(d+(13*(m+1))/5+k+(k/4)+(j/4)+5*j)%7;
	int diaSemana=(h+5)%7;
	return diaSemana;
}
String CFecha::Largo(){
	String diasSemana[7]={"domingo","lunes","martes","miercoles","jueves","viernes","sabado"};
	String meses[12]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
	int diaSema=DiaSemana();
	String fechaLarga=diasSemana[diaSema]+" "+IntToStr(GetDia())+" de "+meses[GetMes()-1]+" de "+IntToStr(GetA�o());
	return fechaLarga;
}
String CFecha::EstacionDelA�o(){
	if ((GetMes()==3 && GetDia()>=21)||(GetMes()==4)||(GetMes()==5)||(GetMes()==6 && GetDia()<=20)) {
		return "primavera";
	}else if ((GetMes()==6 && GetDia()>=21)||(GetMes()==7)||(GetMes()==8)||(GetMes()==9 && GetDia()<=22)) {
			return "verano";
		  }else if ((GetMes()==9 && GetDia()>=23)||(GetMes()==10)||(GetMes()==11)||(GetMes()==12 && GetDia()<=20)) {
					return "oto�o";
				}else{
					return "invierno";
				}
}
int CFecha::convertirADias(){
	int totalDias=0;
	int yearBase=1900;
	for (int i=yearBase; i < GetA�o(); i++) {
		totalDias+=(A�oBisiesto(i))?366:365;
	}
	int diasMeses[]={31,(A�oBisiesto(GetA�o())?29:28),31,30,31,30,31,31,30,31,30,31};
	for (int i = 1; i < GetMes(); i++) {
		totalDias+=diasMeses[i - 1];
	}
	totalDias+=GetDia();
	return totalDias;
}
int DiasEntre(CFecha otraFecha){
	int diasFecha1=otraFecha.convertirADias();
	int diasFecha2=otraFecha.convertirADias();
	return abs(diasFecha1-diasFecha2);
}
/*void siguiente(){
	int a=GetA�o();
	int m=GetMes();
	int d=GetDia();
	d++;
	if (d > DiasMes(m)) {
		d=1;
		m++;
		if (m>12) {
			m=1;
			a++;
		}
	}
}
void anterior(){
} */
CFecha CFecha::Copia(){
	CFecha nuevaFecha(this->Dia,this->Mes,this->A�o);
	return nuevaFecha;
}
bool CFecha::igualQue(CFecha fecha){
	return (this->Dia == fecha.GetDia() &&
			this->Mes == fecha.GetMes() &&
			this->A�o == fecha.GetA�o());
}
bool CFecha::menorQue(CFecha fecha){
	if (this->A�o < fecha.GetA�o()) {
		return true;
	} else if (this->A�o == fecha.GetA�o()) {
		if (this->Mes < fecha.GetMes()) {
			return true;
		} else if (this->Mes == fecha.GetMes()) {
			return this->Dia < fecha.GetDia();
		}
	}
	return false;
}
bool CFecha::mayorQue(CFecha fecha) {
	if (this->A�o > fecha.GetA�o()) {
		return true;
	} else if (this->A�o == fecha.GetA�o()) {
		if (this->Mes > fecha.GetMes()) {
			return true;
		} else if (this->Mes == fecha.GetMes()) {
			return this->Dia > fecha.GetDia();
		}
	}
	return false;
}




