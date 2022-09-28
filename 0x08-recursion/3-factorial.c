#include "main.h"
/**
 *factorial - return the factorial of a given number
 *@n: the number.
 *Return: return the factorial of number.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
else
return (n * factorial(n - 1));
}
