#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - a program that multiplies two numbers.
 *@argc: argument count
 *@argv: argument verctor
 *Return: always 0
 */

int main(int argc, char *argv[])
{
int val1, val2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
val1 = atoi(argv[1]);
val2 = atoi(argv[2]);
printf("%d\n", val1 *val2);
return (0);
}
