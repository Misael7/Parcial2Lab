/*
 * parser.c
 *
 *  Created on: 21 nov. 2019
 *      Author: alumno
 */
#include "parser.h"
#include "LinkedList.h"
#include "Cachorros.h"

int parser_CachorroFromText(FILE* pFile , LinkedList* pListCachorros)
{
	int r;
	int pos=0;
	char var1[50],var2[50],var3[50],var4[50],var5[50];

	do
	{
			r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4,var5);
			if(r==5)
			{

					 Cachorro* cachorro = cachorro_newParametros(var1,var2,var3,var4,var5);
					 if(cachorro!=NULL)
					 {
						 ll_add(pListCachorros,cachorro);
					 }

			}
			else
			break;
	}while(!feof(pFile));
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */


int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pListCachorros)
{
	do
	{
		Cachorro* cachorro;
		cachorro = cachorro_new();
	    if(cachorro!=NULL)
		{
	    	 fread(cachorro,sizeof(Cachorro),1,pFile);
			 ll_add(pListCachorros,cachorro);
		}

	}while(!feof(pFile));
    return 1;
}

