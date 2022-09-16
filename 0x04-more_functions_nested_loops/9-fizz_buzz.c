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
if (i % 3 == 0 && i % 5 == 0)
{
_putchar(" fizzBuzz"};
else if (i % 3 == 0)
{
_putchar(" fizz");
}
else if (i % 5 == 0)
{
_putchar(" buzz");
}
else
_putchar(" %d", i);
return (0);
}
