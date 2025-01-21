//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCafetera.h"
#include "VCL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Ccafetera::Ccafetera(){
	cafetera=0;
}

Ccafetera Ccafetera::CafeteraMAX(){
	CAPACIDAD_MAX;
}

Ccafetera Ccafetera::CafeteraMAXyACTUAL(){
	int Temperatura=80;
	int MAX=CAPACIDAD_MAX;
	if (CAPACIDAD_MAX>=1000) {
		CantidadActual=MAX;
	}
}

int Ccafetera::LlenarCafetera(){  ////
	int llenar=1000;
	int lleno=0;
	if (cafetera==0) {
		cafetera+=llenar;
		lleno=llenar;
	}
	return lleno;
}

int Ccafetera::ServirTaza(int taza){ ////
	int actual=1000;
	int x=taza;int tazza=200;
	for (int i=0; i <x; i++) {
		actual=actual-tazza;
	}if(actual<0){
		ShowMessage("la cantidad de tazas a servir cafe excede los 1000 ");
		actual=0;
	 }
	return actual;
}

int Ccafetera::VaciarCafetera(){
	CantidadActual=0;
	return CantidadActual;
}

int Ccafetera::AgregarCafe(int agregar){
	int resultado=-999;
	if (agregar>=0 && agregar<=1000) {
		resultado=agregar;
	}else{
		ShowMessage("La cantidad que intentas agregar no esta dentro del rango de la cafetera");
	}
	return resultado;
}

int Ccafetera::ImprimirCapacidadMaxima(){
	return CAPACIDAD_MAX;
}
int Ccafetera::ImprimirCantidadActual(){
	return 0;
}
int Ccafetera::ImprimirTemperatura(){
	return Temperatura;
}
