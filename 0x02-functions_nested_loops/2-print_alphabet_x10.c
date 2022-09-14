#include "main.h"
/**
 *print_alphabet_x10 - print alphabbet in lowercase 10times
 */
void print_alphabet_x10(void)
{
int i = 0;
char leter;
while (i++ <= 10)
{
for (leter = 'a'; leter <= 'z'; leter++)
{
_putchar(leter);
}
_putchar('\n');
}
}
