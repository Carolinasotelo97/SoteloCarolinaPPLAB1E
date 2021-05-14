/*
 * contribuyentes.c
 *
 *  Created on: 13 may. 2021
 *      Author: caroo
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contribuyentes.h"
#include "utn.h"




int impContribuyente(eContribuyentes* unCont){

	int retorno = -1;


	if(unCont != NULL && unCont->isEmpty == 0){
		retorno = 0;
		printf("\n Id: %d ------ Nombre: %s ------ Apellido: %s ------ Cuit: %d", unCont->id, unCont->nombre, unCont->apellido, unCont->cuil);
	}
	return retorno;
}

int impArray(eContribuyentes* array, int len){
	int retorno = -1;
	int i;

	if(array != NULL && len > 0){
		retorno = 0;
		for(i = 0; i < len; i++){
			impContribuyente(&array[i]);
		}
	}
	return retorno;
}

int inicializarCont(eContribuyentes* contribuyentes, int len){
	int retorno = -1;
	int i;

	if(contribuyentes != NULL && len > 0){
		retorno = 0;
		for(i= 0; i<len; i++){
			contribuyentes[i].isEmpty = 1;
		}
	}
	return retorno;
}

int checkCont(eContribuyentes* cont, int len){
	int retorno;
	if(cont != NULL && len>0){
		retorno =1;
	}else{
		retorno = 0;
	}
	return retorno;
}

int buscarIndiceLibreCont(eContribuyentes* cont, int len)
{
    int retorno = -1; // caso de error
    if(checkCont(cont, len))
    {
        for(int i = 0; i<len; i++)
        {
            if(cont[i].isEmpty)
            {
                retorno = i;
                break; // como encontre uno vacio, salgo
            }
        }
    }
    return retorno; // devuelvo -1 p error, el i si encontre libre
}


int altaCont(eContribuyentes cont, int id, char nombre, char apellido, int cuil, int len){
	int retorno = -1;
	eContribuyentes contr;
	if(checkCont(cont,len)){
		if(buscarIndiceLibreCont>= 0 && buscarIndiceLibreCont<len){
			strcpy(contr[buscarIndiceLibreCont].nombre, nombre
				&& contr[buscarIndiceLibreCont].apellido, apellido);
			contr[buscarIndiceLibreCont].id = id;
			contr[buscarIndiceLibreCont].cuil = cuil;
			contr[buscarIndiceLibreCont].isEmpty = 0;
			retorno = 0;//alta exitosa
		}
		return retorno; // 0 ok, -1 error
	}

int modificarCont(eContribuyentes* cont,int len, int indice)
{
	int retorno = -1;
	eContribuyentes contr;

	if(cont != NULL && len > 0 && indice < len && indice >= 0 && cont[indice].isEmpty == 0)
	{
		if(	utn_getNombre(cont->nombre,NOMBRE_LEN,"\nNombre?\n","\nERROR\n",2) == 0 &&
			utn_getApellido(cont->apellido,APELLIDO_LEN,"\nApellido?\n","\nERROR\n",2) == 0)
		{
			retorno = 0;
			contr->id= cont[indice].id;
			contr->isEmpty = 0;
			contr[indice] = cont;
		}
	}
	return retorno;
}

int bajaCont(eContribuyentes cont,int len, int indice)
{
	int retorno = -1;
	if(cont != NULL && len > 0 && indice < len && indice >= 0 && cont[indice].isEmpty == 0)
	{
		cont[indice].isEmpty = 1;
		retorno = 0;
	}
	return retorno;
}

int buscarIdCont(eContribuyentes cont[], int len, int valorBuscado)
{
	int retorno = -1;
	int i;
	if(cont != NULL && len > 0 && valorBuscado >= 0)
	{
		retorno = 0;
		for(i=0;i<len;i++)
		{
			if(cont[i]->id == valorBuscado)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int posicionCont(eContribuyentes cont,int len)
{
	int retorno= -1;
	int i;
	if(cont != NULL && len > 0)
	{
		retorno= 0;
		for(i=0;i<len;i++)
		{
			if(cont[i].isEmpty == 1)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}
