#include "main.h"
/**
 *_strncat -  a function that concatenates two strings.
 *@dest: data type
 *@src: data type
 *@n: data type
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
