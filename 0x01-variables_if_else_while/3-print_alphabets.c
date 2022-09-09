#include <stdio.h>
/**
 *main -entry point
 *Return: 0 if success
*/
int main(void)
{
char i;
printf("\n\nLower case characters:\n");
for (i = 'a'; i <= 'z'; i++)
printf("%c ", i);
printf("Capital (upper) case characters:\n");
for (i = 'A'; i <= 'Z'; i++)
printf("%c ", i);
return (0);
}
