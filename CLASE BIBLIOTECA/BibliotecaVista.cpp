//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BibliotecaVista.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include<Biblioteca.cpp>
#include<Libro.cpp>
TForm1 *Form1;
Libro libro;
Libro libroDos;
Biblioteca biblioteca;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Label1->Caption="Libro Guardado";

	libro.setTitulo(LabeledEdit1->Text);
	libro.setIsbn(LabeledEdit2->Text);
	libro.setNumeroPaginas(StrToInt(LabeledEdit3->Text));
	libro.setNumeroEdicion(StrToInt(LabeledEdit4->Text));
	libro.setEditorial(LabeledEdit5->Text);
	libro.setLugar(LabeledEdit6->Text);
	libro.setCodigo(StrToInt(LabeledEdit8->Text));
	libro.setYearEdicion(StrToInt(LabeledEdit7->Text));
	libro.setAutor(LabeledEdit18->Text);

	biblioteca.añadirLibro(libro);
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button3Click(TObject *Sender)
{
	libroDos=biblioteca.buscarPorTitulo(LabeledEdit17->Text);

	LabeledEdit15->Text=libroDos.getIsbn();
	LabeledEdit14->Text=libroDos.getNumeroPaginas();
	LabeledEdit13->Text=libroDos.getNumeroEdicion();
	LabeledEdit12->Text=libroDos.getEditorial();
	LabeledEdit11->Text=libroDos.getLugar();
	LabeledEdit10->Text=libroDos.getCodigo();
	LabeledEdit9->Text=libroDos.getYearEdicion();
	LabeledEdit18->Text=libroDos.getAutor();

	String titulo;
	String isbn;
	int numeroPaginas;
	int numeroEdicion;
	String editorial;
	String lugar;
	int codigo;
	int yearEdicion;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	libroDos=biblioteca.buscarPorAutor(LabeledEdit19->Text);
	LabeledEdit21->Text=libroDos.getIsbn();
	LabeledEdit22->Text=libroDos.getNumeroPaginas();
	LabeledEdit23->Text=libroDos.getNumeroEdicion();
	LabeledEdit24->Text=libroDos.getEditorial();
	LabeledEdit25->Text=libroDos.getLugar();
	LabeledEdit27->Text=libroDos.getCodigo();
	LabeledEdit26->Text=libroDos.getYearEdicion();
	LabeledEdit20->Text=libroDos.getTitulo();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	libroDos=biblioteca.buscarPorCodigo(LabeledEdit33->Text);
	LabeledEdit35->Text=libroDos.getIsbn();
	LabeledEdit34->Text=libroDos.getNumeroPaginas();
	LabeledEdit29->Text=libroDos.getNumeroEdicion();
	LabeledEdit32->Text=libroDos.getEditorial();
	LabeledEdit31->Text=libroDos.getLugar();
	LabeledEdit28->Text=libroDos.getAutor();
	LabeledEdit30->Text=libroDos.getYearEdicion();
	LabeledEdit36->Text=libroDos.getTitulo();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if (biblioteca.prestar(StrToInt(LabeledEdit44->Text),LabeledEdit45->Text)) {
		LabeledEdit37->Text="El libro fue prestado exitosamente";
	}else{
		LabeledEdit37->Text="El libro no fue prestado ";
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	if (biblioteca.devolver(StrToInt(LabeledEdit38->Text))) {
		LabeledEdit39->Text="El libro fue devuelto exitosamente";
	}else{
		LabeledEdit39->Text="El libro no fue devuelto ";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	if (biblioteca.reservar(StrToInt(LabeledEdit40->Text))) {
		LabeledEdit41->Text="El libro fue reservado exitosamente";
	}else{
		LabeledEdit41->Text="El libro no fue reservado ";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	if (biblioteca.darDeBaja(StrToInt(LabeledEdit43->Text))) {
		LabeledEdit42->Text="El libro fue Dado De Baja exitosamente";
	}else{
		LabeledEdit42->Text="El libro no fue Dado De Baja ";
	}
}
//---------------------------------------------------------------------------

