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
		int A�o;
		String Genero;
	public:
		Ccancion();
		//String Cancion(String Nombrecancion,String autor,int a�o,String genero);
		String ModificarNombreCancion(String Nombrecancion);
		String ModificarAutor(String autor);
		int ModificarA�o(int a�o);
		String ModificarGenero(String genero);
		String ImprimirCancion();
		String ImprimirAutor();
		int ImprimirA�o();
		String ImprimirGenero();
};
#endif
