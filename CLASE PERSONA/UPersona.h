//---------------------------------------------------------------------------

#ifndef UPersonaH
#define UPersonaH
#include <string>
//---------------------------------------------------------------------------
class CPersona{
	private:
		String Nombre;
		String FechaDeNacimiento;
		String LugarDeNacimiento;
		int CarnetDeIdentidad;
		String Sexo;
		float Peso;
		float Altura;
	public:
		CPersona(){
		}
		CPersona(String Nombre,String FechaDeNacimiento,String Sexo,String LugarDeNacimiento,int CarnetDeIdentidad,float peso,float altura){
			this->Nombre=Nombre;
			this->FechaDeNacimiento=FechaDeNacimiento;
			this->Sexo=Sexo;
			this->LugarDeNacimiento=LugarDeNacimiento;
			this->CarnetDeIdentidad=CarnetDeIdentidad;
			this->Peso=Peso;
			this->Altura=Altura;
		}
		void SetNombre(String nombre){
			Nombre=nombre;
		}
		String GetNombre(){
			return Nombre;
		}
		void SetFechaDeNacimiento(String fechadenacimiento){
			FechaDeNacimiento=fechadenacimiento;
		}
		String GetFechaDeNacimiento(){
			return FechaDeNacimiento;
		}
		void SetSexo(String sexo){
			Sexo=sexo;
		}
		String GetSexo(){
			return Sexo;
		}
		void SetLugarDeNacimiento(String lugardenacimiento){
			LugarDeNacimiento=lugardenacimiento;
		}
		String GetLugarDeNacimiento(){
			return LugarDeNacimiento;
		}
		void SetCarnetDeIdentidad(int carnetdeidentidad){
			CarnetDeIdentidad=carnetdeidentidad;
		}
		int GetCarnetDeIdentidad(){
			return CarnetDeIdentidad;
		}
		void SetPeso(float peso){
			Peso=peso;
		}
		float GetPeso(){
			return Peso;
		}
		void SetAltura(float altura){
			Altura=altura;
		}
		float GetAltura(){
			return Altura;
		}
		int Edad(int a�o){
			int resultado=-999;
			int A�oActual=2024;
			if (a�o>=0 && a�o<=2024) {
				resultado=A�oActual-a�o;
			}else{
				ShowMessage("ingrese bien el a�o de nacimiento");
			}
			return resultado;
		}

		int CalcularIMC(float peso, float altura) {
		double imc = peso / (altura * altura);
		// Clasificaci�n de acuerdo con los rangos de IMC de la OMS
		if (imc < 18.5) {
			return -1;  // Bajo peso
		} else if (imc >= 18.5 && imc <= 24.9) {
		return 0;   // Peso ideal
		 } else {
				return 1;   // Sobrepeso
				}
		}
		bool EsMayorDeEdad(int a�os){
			if (a�os>=18) {
			   ShowMessage("Es Mayor De Edad");
			}else{
				ShowMessage("No Es Mayor De Edad");
			}
		}

};
#endif
