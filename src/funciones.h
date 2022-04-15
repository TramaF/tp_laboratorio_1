/*
 * funciones.h
 *
 *  Created on: 11 Apr 2022
 *      Author: xxfra
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
int km;
float precioAerolineas, precioLatam;
float debitoLatam, debitoAero, creditoLatam, creditoAero, btcAero, btcLatam, precioKmAero, precioKmLatam, diferenciaPrecio;





int deployMenu(int opcionElegida);
int menuPrecioVuelo(int opcionElegida);

float costoDebito(float precio);
float costoCredito(float precio);
float costoBtc(float precio);
float precioKilometro(int kilometros, float precio);
float diferencia(float costoAero, float costoLatam);

void cuentas(int kilometros, float precioAero, float precioLatam);
void printResultados();

#endif /* FUNCIONES_H_ */
