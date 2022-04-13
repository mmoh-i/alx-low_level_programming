#include <main.h>

/**
 * main - using the main.h header
 *
 * Return: functionn with alphabet 10X
 */
void print_alphabet_x10(void)
{
int count = 0;
int alphabet;

while (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putcahr(alphabet);
}

count++;

_putchar('\n');

}
