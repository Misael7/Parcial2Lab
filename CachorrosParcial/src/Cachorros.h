/*
 * Cachorros.h
 *
 *  Created on: 21 nov. 2019
 *      Author: alumno
 */

#ifndef CACHORROS_H_
#define CACHORROS_H_

typedef struct
{
	char id_cachorro[50];
	char nombre[50];
	char dias[50];
	char reservado[50];
	char genero[50];
}Cachorro;

int cachorro_setId(Cachorro* this,char* id_cachorro);
int cachorro_getId(Cachorro* this,char* id_cachorro);
int cachorro_setNombre(Cachorro* this,char* nombre);
int cachorro_getNombre(Cachorro* this,char* nombre);
int cachorro_setDias(Cachorro* this,char* dias);
int cachorro_getDias(Cachorro* this,char* dias);
int cachorro_setReservado(Cachorro* this,char* reservado);
int cachorro_getReservado(Cachorro* this,char* reservado);
int cachorro_setGenero(Cachorro* this,char* genero);
int cachorro_getGenero(Cachorro* this,char* genero);




#endif /* CACHORROS_H_ */
