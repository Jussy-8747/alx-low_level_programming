#include <string.h>
#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination of the string.
 *@src: source of the string.
 *@n: bytes.
 *Return: 1
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
