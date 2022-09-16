#include <stdio.h>
#include <stdlib.h>
/**
 *main - print number from 1 to 100
 *Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
_putcha(" FizzBuzz");
else if (i % 3 == 0)
_putchar(" Fizz");
else if (i % 5 == 0)
_putchar(" Buzz");
else
_putchar(" %d", i);
}
return (0);
}
