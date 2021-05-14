/*
 * contribuyentes.h
 *
 *  Created on: 13 may. 2021
 *      Author: caroo
 */

#ifndef CONTRIBUYENTES_H_
#define CONTRIBUYENTES_H_

#define NOMBRE_LEN 50
#define APELLIDO_LEN 50


typedef struct{
	int id;
	char nombre[NOMBRE_LEN];
	char apellido[APELLIDO_LEN];
	int cuil;
	int isEmpty;
}eContribuyentes;



#endif /* CONTRIBUYENTES_H_ */
