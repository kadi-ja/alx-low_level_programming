#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * create_array - a function that creates an array of chars
 * @size: data type
 * @c: initial value
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
if (size == 0)
return (NULL);
ptr = (char*)malloc(size * sizeof(c));
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
  free(ptr);
}
