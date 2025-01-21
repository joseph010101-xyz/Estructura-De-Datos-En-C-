//---------------------------------------------------------------------------

#ifndef UCancionH
#define UCancionH
#include <string>
//---------------------------------------------------------------------------
class Ccancion{
	private:
        String Cancion;
		String NombreCancion;
		String Autor;
		int Año;
		String Genero;
	public:
		Ccancion();
		//String Cancion(String Nombrecancion,String autor,int año,String genero);
		String ModificarNombreCancion(String Nombrecancion);
		String ModificarAutor(String autor);
		int ModificarAño(int año);
		String ModificarGenero(String genero);
		String ImprimirCancion();
		String ImprimirAutor();
		int ImprimirAño();
		String ImprimirGenero();
};
#endif
