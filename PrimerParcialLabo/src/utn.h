/*
 * utn.h
 *
 *  Created on: 13 may. 2021
 *      Author: caroo
 */

#ifndef UTN_H_
#define UTN_H_


int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int utn_getNombre(char* pResultado, int longitud,char* mensaje, char* mensajeError, int reintentos);
int utn_getApellido(char* pResultado, int longitud,char* mensaje, char* mensajeError, int reintentos);
int utn_getDescripcion(char* pResultado, int longitud,char* mensaje, char* mensajeError, int reintentos);
int utn_getCuil(char* pResultado, int longitud,char* mensaje, char* mensajeError, int reintentos);

#endif /* UTN_H_ */
