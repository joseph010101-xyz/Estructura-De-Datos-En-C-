//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCancion.h"
#include "VCL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Ccancion::Ccancion(){
	Cancion="";
}

String Ccancion::ModificarNombreCancion(String Nombrecancion){
	NombreCancion=Nombrecancion;
}

String Ccancion::ModificarAutor(String autor){
	Autor=autor;
}

int Ccancion::ModificarAño(int año){
	if (año<=2024) {
		Año=año;
	}else{
		ShowMessage("no es una cancion de un año existente");
	}
}

String Ccancion::ModificarGenero(String genero){
	Genero=genero;
}

String Ccancion::ImprimirCancion(){
	return NombreCancion;
}

String Ccancion::ImprimirAutor(){
	return Autor;
}

int Ccancion::ImprimirAño(){
	return Año;
}

String Ccancion::ImprimirGenero(){
	return Genero;
}


////////////Joseph Flores Garcia///////////////
