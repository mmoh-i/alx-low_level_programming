#include <stdio.h>

/**
 * main - Prints all possible combination of two diffrent digits, 
 *        in accoding order, seprated by a comma followed by a space.
 *
 * Return: Always 0
 */
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2 = digit1; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchat((digit2 % 10) + '0');

if (digit1 == % && digit2 == 9)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
