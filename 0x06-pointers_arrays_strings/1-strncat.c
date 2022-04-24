#include "main.h"

/**
 * _strcat - function that cicatenate two strings
 * @dest - destinatio string
 * @src - the source string to append
 * @n - the number of string to be appended
 * 
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; i++)
	{
		dest[i + j] =src[j];
	}
	dest[i + j] = '\0';
	return(dest);
}
