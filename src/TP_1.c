/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(void) {
	setbuf(stdout, NULL);
	int opcion, opcionVuelo;
	int banderaTres = 0;

	km = 0;
	precioAerolineas = 0;
	precioLatam = 0;
	opcion = 0;
	opcionVuelo = 0;

	printf("Bienvenido!"); /* prints !!!Hello World!!! */

	do
	{
		opcion = deployMenu(opcion);
		switch(opcion)
		{
			case 1:
				printf("\nIngrese la cantidad de kilometros: ");
				scanf("%d", &km);
				break;
			case 2:
				opcionVuelo = menuPrecioVuelo(opcionVuelo);
				switch(opcionVuelo)
				{
					case 1:
						printf("\nIngrese el precio de aerolineas: \n");
						scanf("%f", &precioAerolineas);
						break;
					case 2:
						printf("\nIngrese el precio de Latam \n");
						scanf("%f", &precioLatam);
						break;
					default:
						break;
				}
				break;
			case 3:
				if(km == 0 || precioAerolineas == 0 || precioLatam == 0)
				{
					printf("/n No se cuenta con los datos sucientes para realizar esta operacion.");
				}
				else
				{
					cuentas(km, precioAerolineas, precioLatam);

					banderaTres = 1;
				}
				break;
			case 4:
				if(banderaTres == 1)
				{
					printResultados();
				}
				else
				{
					printf("\nSe debe ejecutar la opcion 3 para imprimir los precios.");
				}

				break;
			case 5:
				km = 7090;
				precioAerolineas = 162965;
				precioLatam = 159339;
				cuentas(km, precioAerolineas, precioLatam);
				printResultados();
				break;
			case 6:
				break;
			default:
				printf("\nIngrese una opcion valida.");
				break;
		}
	}while(opcion != 6);
	printf("\nHasta luego!");
	return EXIT_SUCCESS;
}
