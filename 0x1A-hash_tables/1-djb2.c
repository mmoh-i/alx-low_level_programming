#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

#define INIT 5381
#define MULT 33
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str){
	u_int32_t hash = INIT;
	char c;
	while((c = *str++)){
		hash = hash * MULT + c;
	}
	return hash;
}
