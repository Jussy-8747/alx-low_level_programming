#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
int lent = 0;
int i = 0;
while (s[i++]
lent++;
for (i = lent - 1; i >= 0; i--)
_putchar(s[i]);
_putchar("\n");
}
