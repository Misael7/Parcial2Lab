/*
 * Controller.c
 *
 *  Created on: 21 nov. 2019
 *      Author: alumno
 */
#include "Controller.h"
int controller_loadFromText(char* path , LinkedList* pListCachorro)
{
	FILE* pFile;
	pFile = fopen(path,"r");
		if(pFile == NULL)
		{
				printf("El archivo no existe");
				exit(EXIT_FAILURE);
		}
		else
		{
			parser_CachorroFromText(pFile, pListCachorro);
			printf("Exito de parseo");
		}
		fclose(pFile);
    return 1;
}

int controller_loadFromBinary(char* path , LinkedList* pListCachorro)
{
	FILE* pFile;
		pFile = fopen(path,"rb");
			if(pFile == NULL)
			{
					printf("El archivo no existe");
					exit(EXIT_FAILURE);
			}
			else
			{
				parser_EmployeeFromBinary(pFile, pListCachorro);
			}
			fclose(pFile);

	return 1;
}

int controller_ListCachorro(LinkedList* pListCachorro)
{
	char id_cachorro[50];
	char nombre[50];
	char dias[50];
	char raza[50];
	char reservado[50];
	char genero[50];
	Cachorro* cachorro;
	for(int i =0 ; i <ll_len(pListCachorro); i++)
	{
	cachorro=ll_get(pListCachorro, i);
	cachorro_getId(cachorro,id_cachorro);
	cachorro_getNombre(cachorro,nombre);
	cachorro_getDias(cachorro, dias);
	cachorro_getRaza(cachorro,raza);
	cachorro_getReservado(cachorro,reservado);
	cachorro_getGenero(cachorro,genero);

	printf("\nID Cachorro %s\nNombre  %s\n dias %s\n raza %s\n reservado%s\n genero%s\n",id_cachorro, nombre , dias , reservado, genero);
	}
    return 1;
}
