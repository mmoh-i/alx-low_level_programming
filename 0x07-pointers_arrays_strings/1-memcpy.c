#include "main.h"
/**
 * *_memcpy - function that copies memeory area
 * @dest : the detination of the charactere
 * @src : the src of the character
 * @n : number of bytest from the memory area
 * Returns : dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	
	while (i < n)
	{
		*(dest + i ) = *(src + i);
		i++;
	}
	return (dest);
}
