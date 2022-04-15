/*
 * funciones.c
 *
 *  Created on: 11 Apr 2022
 *      Author: xxfra
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int deployMenu(int opcionElegida)
{
	printf("\nElija una opcion: ");
	printf("\n1. Ingresar Kilómetros: (km=%d)", km);
	printf("\n2. Ingresar Precio de Vuelos: (Aerolíneas=%.2f, Latam=%.2f)", precioAerolineas, precioLatam);
	printf("\n3. Calcular todos los costos.");
	printf("\n4. Informar Resultados.");
	printf("\n5. Carga forzada de datos.");
	printf("\n6. Salir.\n");
	scanf("%d", &opcionElegida);

	return opcionElegida;
}
int menuPrecioVuelo(int opcionElegida)
{
	printf("\n 1)Precio vuelo aerolineas: ");
	printf("\n 2)Precio vuelo Latam: ");
	printf("\n Elija cualquier otra opcion para volver al menu.\n");
	scanf("%d", &opcionElegida);
	return opcionElegida;
}

float costoDebito(float precio)
{
	float precioDebito = precio * 0.9;
	return precioDebito;
}
float costoCredito(float precio)
{
	float precioCredito = precio * 1.25;
	return precioCredito;
}
float costoBtc(float precio)
{
	float precioBtc = precio / 4606954.55;
	return precioBtc;
}
float precioKilometro(int kilometros, float precio)
{
	float precioKm = kilometros / precio;
	return precioKm;
}
float diferencia(float costoAero, float costoLatam)
{
	float diferenciaPrecios = (costoLatam - costoAero);
	if ( diferenciaPrecios < 0 )
	{
		diferenciaPrecios = diferenciaPrecios * -1;
	}
	return diferenciaPrecios;
}

void cuentas(int km, float precioAerolineas, float precioLatam)
{
	debitoAero = costoDebito(precioAerolineas);
						debitoLatam = costoDebito(precioLatam);
						creditoAero = costoCredito(precioAerolineas);
						creditoLatam = costoCredito(precioLatam);
						btcAero = costoBtc(precioAerolineas);
						btcLatam = costoBtc(precioLatam);
						precioKmAero = precioKilometro(km, precioAerolineas);
						precioKmLatam = precioKilometro(km, precioLatam);
						diferenciaPrecio = diferencia(precioAerolineas, precioLatam);
}
void printResultados()
{
	printf("\nKMs ingresados: %d", km);
						printf("\nPrecio Aerolineas: $ %.2f", precioAerolineas);
						printf("\n  a) Precio con tarjeta de debito: %.2f", debitoAero);
						printf("\n  b) Precio con tarjeta de credito: %.2f", creditoAero);
						printf("\n  c) Precio pagando con bitcoin: %f BTC", btcAero);
						printf("\n  d) Precio unitario: %.2f", precioKmAero);
						printf("\nPrecio Latam: $ %.2f", precioLatam);
						printf("\n  a) Precio con tarjeta de debito: %.2f", debitoLatam);
						printf("\n  b) Precio con tarjeta de credito: %.2f", creditoLatam);
						printf("\n  c) Precio pagando con bitcoin: %f BTC", btcLatam);
						printf("\n  d) Precio unitario: %.2f", precioKmLatam);
						printf("\nLa diferencia de precio es : %.2f \n", diferenciaPrecio);
}
