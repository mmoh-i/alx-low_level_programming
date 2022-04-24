#include "main,h"

/**
 * _strncat - concatenates two strings
 * @dest:char dest
 * @src: char src
 * @n:length int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[k] != '\0' && n > k)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
