#include <stdio.h>
#include "main.h"

/**
 *main - a program that prints the number of arguments passed into it.
 *@argc: argument count
 *@argv: argument verctor
 *Return: always 0
 */

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
