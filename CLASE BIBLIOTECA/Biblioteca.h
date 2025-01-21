//---------------------------------------------------------------------------
#ifndef BibliotecaH
#define BibliotecaH

#include <string>
#include <vector>
#include <fstream>
#include <stdexcept> // Para manejar las excepciones
#include "Libro.h"
#include<Libro.cpp>
using namespace std;

//---------------------------------------------------------------------------
class Biblioteca{
	private:
	vector<Libro> libros;


	public:

	void añadirLibro(Libro libro) {
	libros.push_back(libro); // Agregar libro al vector de libros}
	}

	Libro buscarPorTitulo(String titulo) {
	for (auto &libro : libros) {
		if (libro.getTitulo() == titulo) {
			return libro;
		}
	}
	// Aquí puedes lanzar una excepción si no se encuentra el libro
	throw runtime_error("Libro no encontrado por título");
	}
	Libro buscarPorAutor(String autor) {
	for (auto &libro : libros) {
		if (libro.getAutor() == autor) {
			return libro;
		}
	}
	// Aquí puedes lanzar una excepción si no se encuentra el libro
	throw runtime_error("Libro no encontrado por autor");
	}

	Libro buscarPorCodigo(String codigo) {
	for (auto &libro : libros) {
		if (libro.getCodigo() == codigo) {
			return libro;
		}
	}
	// Aquí puedes lanzar una excepción si no se encuentra el libro
	throw runtime_error("Libro no encontrado por codigo");
	}

	bool prestar(int codigo,String fechaDevolucion){
	  for (auto &libro : libros){
		 if (libro.getCodigo()==codigo && libro.getEstado()=="disponible") {
			libro.setEstado("prestado");
			libro.setFechaDevolucion(fechaDevolucion);
			return true;
		 }
	  }
	  return false;
	}

	bool devolver(int codigo){
		for(auto &libro :libros){
			if (libro.getCodigo()==codigo && libro.getEstado()=="prestado") {
				libro.setEstado("prestado");
				libro.setFechaDevolucion(" ");
				return true;
			}
		}
		return false;
	}

	bool reservar(int codigo){
		for(auto &libro : libros){
			if (libro.getCodigo()==codigo or libro.getEstado()=="disponible") {
				libro.setEstado("prestado");
				return true;
			}
		}
		return false;
	}

	bool darDeBaja(int codigo){
		for (size_t i = 0; i < libros.size(); i++) {
			if (libros[i].getCodigo()==codigo) {
				libros.erase(libros.begin()+i);
				return true;
			}
		}
		return false;
	}

};
#endif
