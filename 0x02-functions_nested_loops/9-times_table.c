#include "main.h"
/**
 *times_table - a function that prints the 9 times table, starting with 0
 *Return: always 0
 */
void times_table(void)
{
int i = 0;
int j = 1;
int num = 0;

while (i <= 9)
{
_putchar('0');
_putchar(',');
_putchar(' ');
while (j <= 9)
{
num = i * j;
if ((num / 10) > 0)
_putchar((num / 10) + '0');
else
_putchar(' ');
_putchar((num % 10) + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
j = 1;
}
}
