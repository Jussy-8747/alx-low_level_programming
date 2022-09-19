#include "main.h"
#include <string.h>
/**
 * print_rev - print a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
int lent = 0;
int i;
char temp;
int middle;
lent = strlen(s);
middle = lent / 2;
for (i = 0; i < middle; i++)
temp = s[i];
s[i] = s[lent - i - 1];
s[i] = s[lent - i - 1] = temp;
}
