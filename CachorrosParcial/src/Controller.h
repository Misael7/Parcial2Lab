/*
 * Controller.h
 *
 *  Created on: 21 nov. 2019
 *      Author: alumno
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include "Cachorros.h"
#include "LinkedList.h"
int controller_loadFromText(char* path , LinkedList* pListCachorro);
int controller_loadFromBinary(char* path , LinkedList* pListCachorro);
int controller_addCachorro(LinkedList* pListCachorro);
int controller_editCachorro(LinkedList* pListCachorro);
int controller_removeCachorro(LinkedList* pListCachorro);
int controller_ListCachorro(LinkedList* pListCachorro);
int controller_sortCachorro(LinkedList* pListCachorro);
int controller_saveAsText(char* path , LinkedList* pListCachorro);
int controller_saveAsBinary(char* path , LinkedList* pListCachorro);

#endif /* CONTROLLER_H_ */
