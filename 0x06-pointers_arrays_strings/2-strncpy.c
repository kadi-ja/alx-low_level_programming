#include "main.h"
/**
*_strncpy - a function that copies a string.
*@dest: data type 
*@src: data type 
*@n: data type 
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
while (*src)
{
*dest = *src;
  src++;
  dest++;
}
  return (dest);
}
