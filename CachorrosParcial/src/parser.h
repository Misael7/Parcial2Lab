/*
 * parser.h
 *
 *  Created on: 21 nov. 2019
 *      Author: alumno
 */

#ifndef PARSER_H_
#define PARSER_H_
#include "LinkedList.h"
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee);
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee);

#endif /* PARSER_H_ */
