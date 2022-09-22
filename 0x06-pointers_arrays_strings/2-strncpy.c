#include <string.h>
#include "main.h"
/**
 *_strncpy - copy string to another string.
 *@dest: destination of the string.
 *@src: source of the string.
 *@n: bytes
 *Return: 1
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(src, dest, n);
return (dest);
}
