#include "main.h"
/**
 *_strlen - a function that returns the length of a string.
 *@s: string data type
 *Return: always 0
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i)
_putchar(i);
return (0);
}
