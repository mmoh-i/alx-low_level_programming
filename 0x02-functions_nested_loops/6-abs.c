#include "main.h"

/**
 * main - function that computes ths absolute value of an intger
 *
 * Return :Always 0
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);

}

}
