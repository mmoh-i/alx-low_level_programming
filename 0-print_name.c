#include <main.h>
/**
 * print_name - print name as is
 * @name: name of the person
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	printf("Hello, my name is %s\n", name);
}
