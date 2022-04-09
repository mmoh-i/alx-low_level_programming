#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lower and upper alphabet on the same line
 * Return: 0
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
printf('a' + c);
for (c = 0; c < 26; ++c)
printf('A' + c);

return (0);
}
