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
			parser_EmployeeFromText(pFile, pListCachorro);
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


