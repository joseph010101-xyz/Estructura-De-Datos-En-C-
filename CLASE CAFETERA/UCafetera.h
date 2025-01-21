//---------------------------------------------------------------------------

#ifndef UCafeteraH
#define UCafeteraH
//---------------------------------------------------------------------------
const int CAPACIDAD_MAX=1000;
const int Temperatura=80;
class Ccafetera{
	private:
		int cafetera;
		int CapacidadMAX;
		int CantidadActual;
		int Temperatura;
	public:
		Ccafetera();
		Ccafetera CafeteraMAX();
		Ccafetera CafeteraMAXyACTUAL();
		int LlenarCafetera();
		int ServirTaza(int servir);
		int VaciarCafetera();
		int AgregarCafe(int agregar);
		int ImprimirCapacidadMaxima();
		int ImprimirCantidadActual();
		int ImprimirTemperatura();
};
#endif
