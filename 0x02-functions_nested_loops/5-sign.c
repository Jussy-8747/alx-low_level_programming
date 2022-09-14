#include "main.h"
/**
 *_sign - checks for the sign of number
 *@n: number to be checked
 *Return: 1 if the if the number is greater than zero 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('o');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
