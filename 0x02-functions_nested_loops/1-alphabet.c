#include "main.h"

/**
 * mian - Print alphabet
 *
 * Retru: Always 0.
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');
}
