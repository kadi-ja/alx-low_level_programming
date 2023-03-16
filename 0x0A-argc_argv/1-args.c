#include <stdio.h>

/**
 *main - a program that prints the number of arguments passed into it.
 *@argc: argument count
 *@argv: argument verctor
 *Return: always 0
 */

int main(int argc, char *argv[])
{
  int i, sum = 0;
  for(i = 0; i < argc; i++)
    {
      sum += argc;
printf("%d\n", argc);
    }
return (0);
}
