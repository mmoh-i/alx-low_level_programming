#include "main.h"
/**
 * _strlen - calculate the length os a string.
 *
 * @s: the string to calculate its length.
 * Return: lenght of a strig
 */
int _strlen(char *s)
{
	int i;
	int length = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
