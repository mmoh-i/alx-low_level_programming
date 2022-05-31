#include "main.h"

/**
 * set_bit: sets the value of the bit to 1 at a given index
 * @n: a pointer of a assigned long int
 * @index: index of the bit 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;
	if (index > 63)
		return (-1);
	n = 1 << index;
	*n =  (*n | m);
	return (1);
}
