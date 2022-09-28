#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *_pow_recursion - printf power of a number
 *@x: the number
 *@y: the pow.
 *Return: the power.
 */
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result *= _pow_recursion(x, y - 1);
return (result);
}
