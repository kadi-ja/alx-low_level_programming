#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - a program that adds positive numbers.
 *@argc: argument count
 *@argv: argument verctor
 *Return: always 0
 */

int main(int argc, char *argv[])
{
int i, sum;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if  (is digit(argv[i]))
sum += atoi(argv[i];
printf("%d\", sum);
else
printf("Error\n");
return (1);
}
