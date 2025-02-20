//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#ifndef LibroH
#define LibroH
#include<string>
//#include<Biblioteca.cpp>
//---------------------------------------------------------------------------
class Libro{
	private:
	String titulo;
	String isbn;
	int numeroPaginas;
	int numeroEdicion;
	String editorial;
	String lugar;
	String Autor;
	int codigo;
	int yearEdicion;
	String Estado="disponible";
	String FechaDevolucion;

	public:
	Libro(){}
	Libro(String titulo, String isbn, int numeroPaginas, int numeroEdicion, String editorial, String lugar, int codigo, int yearEdicion){
		this->titulo=titulo;
		this->isbn=isbn;
		this->numeroPaginas=numeroPaginas;
		this->numeroEdicion=numeroEdicion;
		this->editorial=editorial;
		this->lugar=lugar;
		this->codigo=codigo;
		this->yearEdicion=yearEdicion;
	}

	 void setTitulo( String nuevoTitulo) { titulo = nuevoTitulo; }
	void setIsbn( String nuevoIsbn) { isbn = nuevoIsbn; }
	void setNumeroPaginas(int nuevoNumeroPaginas) { numeroPaginas = nuevoNumeroPaginas; }
	void setNumeroEdicion(int nuevoNumeroEdicion) { numeroEdicion = nuevoNumeroEdicion; }
	void setEditorial( String nuevaEditorial) { editorial = nuevaEditorial; }
	void setLugar( String nuevoLugar) { lugar = nuevoLugar; }
	void setCodigo(int nuevoCodigo){ codigo=nuevoCodigo; }
	void setYearEdicion(int nuevoYearEdicion) { yearEdicion = nuevoYearEdicion; }
	void setAutor(String autor){Autor=autor;}
	void setEstado(String estado){Estado=estado;}
	void setFechaDevolucion(String fechadevolucion){FechaDevolucion=fechadevolucion;}

	String getTitulo()  { return titulo; }
	String getIsbn()  { return isbn; }
	int getNumeroPaginas()  { return numeroPaginas; }
	int getNumeroEdicion()  { return numeroEdicion; }
	String getEditorial()  { return editorial; }
	String getLugar() { return lugar; }
	int getYearEdicion()  { return yearEdicion; }
	int getCodigo()  { return codigo; }
	String getAutor(){return Autor;}
	String getEstado(){return Estado;}
	String getFechaDevolucion(){return FechaDevolucion;}
};
#endif
