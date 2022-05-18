#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: The  string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list array;
	char *hold;

	va_start(array, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(array, char*);
		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(array);
}
