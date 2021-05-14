/*
 ============================================================================
 Name        : PrimerParcialLabo.c
 Author      : Carolina Sotelo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "contribuyentes.h"
#include "recaudaciones.h"
#include "utn.h"


#define CANT_CONTR 1000
#define CANT_RECA 100

int main(void) {

	setbuf(stdout, NULL);

	eContribuyentes arrayCont[CANT_CONTR];
	int idContribuyentes = 0;
	int opcion;
	int auxIndice;
	int auxId;

	if(inicializarCont(arrayCont, CANT_CONTR) == 0){
		printf("Contribuyente inicializado con exito! \n\n");
	}


	do
	{
		if(!utn_getNumero( &opcion,
							"\n\n1.Dar de Alta un contribuyente"
							"\n2.Modificar un contribuyente"
							"\n3.Eliminar un contribuyente"
							"\n4.-"
							"\n5."
							"\n4.-"
							"\n7.Salir\n\n",
							"\nError opcion invalida",1,7,2) )
		{
			switch(opcion){
				case 1:
					auxIndice = buscarIndiceLibreCont(arrayCont, CANT_CONTR);

					if(altaCont(arrayCont, CANT_CONTR, auxIndice, &idContribuyentes) == 0){
						printf("\nCarga realizada con exito\n");
					}else{
					printf("\nNo hay mas lugar para realizar alta");
					}
					break;
				case 2:
					imrpimirCont(arrayCont, CANT_CONTR);

					printf("\n Indique el ID del contribuyente que desea modificar", &idContribuyentes);
					auxIndice = buscarIdCont(arrayCont, CANT_CONTR, auxId);

					if(auxId >= 0 && modificarCont(arrayCont, CANT_CONTR, auxId) == 0 ){
						printf("\nModificacion realizada con exito!");
					}
					break;
				case 3:
					imrpimirCont(arrayCont, CANT_CONTR);

					printf("\n Indique el ID del contribuyente que desea eliminar", &idContribuyentes);
					auxIndice = buscarIdCont(arrayCont, CANT_CONTR, auxId);

					if(auxId >= 0 && modificarCont(arrayCont, CANT_CONTR, auxId) == 0 ){
						printf("\nModificacion realizada con exito!");
					}
					break;
			}

		}
	}while(opcion !=7);
	return EXIT_SUCCESS;
}
