#include "main.h"
#include <stdio.h>
/**
 *jack_bauer - a function that prints every minute of the day
 *
 *Return: always 0
 */
void jack_bauer()
{
int h, m;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
 printf("%d:%d", h, m);
}
_putchar ('\n');

}
