/*
 * parser.h
 *
 *  Created on: 21 nov. 2019
 *      Author: alumno
 */

#ifndef PARSER_H_
#define PARSER_H_
#include "LinkedList.h"
int parser_CachorroFromText(FILE* pFile , LinkedList* pListCachorro);
int parser_CachorroFromBinary(FILE* pFile , LinkedList* pListCachorro);

#endif /* PARSER_H_ */
