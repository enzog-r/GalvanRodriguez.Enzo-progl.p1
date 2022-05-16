/*
 ============================================================================
 Name        : Parcial.c
 Author      : Enzo Galvan Rodriguez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

int aplicarDescuento(float precioP);


#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	float precio = 360;

	printf("%d", aplicarDescuento(precio));



  return 0;
}



int aplicarDescuento(float precioP)
{
	int descuento;
	int resultado;

	descuento = precioP * (float)5 / 100;

	resultado = precioP - descuento;

	return resultado;
}



