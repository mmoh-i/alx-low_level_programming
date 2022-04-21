#include "main.h"
/**
 * _puts - function that prints a string
 *
 * Return: string
 */
void _puts(char *Str)
{
	int i;

	for (i = 0; str[i] != "\0"; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
