#include <stdio.h>
#include "main.h"

/**
 *main - a program that multiplies two numbers.
 *@argc: argument count
 *@argv: argument verctor
 *Return: always 0
 */

int main(int argc, char *argv[])
{
  int i, mul = 0, intcon;
  if ( argc < 3 || argc > 3)
    {
      printf("Error\n");
      return (1);
    } 
  else
  for (i = 1; i < argc; i++)
    intcon = atoi(argv);
mul *= (argv[i]);
printf("%d\n", mul);
  return (0);
}
