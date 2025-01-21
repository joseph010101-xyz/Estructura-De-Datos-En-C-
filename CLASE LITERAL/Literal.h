#include <vcl.h>
#include <tchar.h>
#include <string>
#pragma once
class Literal {
private:
	String unidades[10] = { "", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve" };
	String decenas[10] = { "", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa" };
	String especiales[9] = { "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve" };
	String centenas[10] = { "", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos" };

	String convertirUnidades(int numero) {
		return unidades[numero];
	}

	String convertirDecenas(int numero) {
		if (numero >= 11 && numero <= 19) {
			return especiales[numero - 11];
		} else {
			int unidad = numero % 10;
			int decena = numero / 10;
			return decenas[decena] + (unidad != 0 ?  " y " + convertirUnidades(unidad)  : "");
		}
	}

	String convertirCentenas(int numero) {
		int centena = numero / 100;
		int resto = numero % 100;
		if (numero == 100) return "cien";
		return centenas[centena] + (resto != 0 ? " " + convertirDecenas(resto) : "");
	}

	String convertirUnidadesMil(long numero) {
		int miles = numero / 1000;
		int resto = numero % 1000;
		String resultado = miles == 1 ? "mil" : convertirCentenas(miles) + " mil";
		return resultado + (resto != 0 ? " " + convertirCentenas(resto) : "");
	}

	String convertirMillones(long numero) {
		long  millones = numero / 1000000;
		long  resto = numero % 1000000;
		String resultado = millones == 1 ? "un millón" : convertirCentenas(millones) + " millones";
		return resultado + (resto != 0 ? " " + convertirUnidadesMil(resto) : "");
	}

public:
	String numeroALiteral(long numero) {
		if (numero == 0) return "cero";
		if (numero < 1000) return convertirCentenas(numero);
		if (numero < 1000000) return convertirUnidadesMil(numero);
		return convertirMillones(numero);
	}
};
