#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra parameters
 * Return: The total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list array;
	int sum;

	va_start(array, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(array, int);

	va_end(array);

	return (sum);
}
