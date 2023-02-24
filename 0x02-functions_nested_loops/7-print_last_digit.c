#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number.
 *@r: int
 *Return: 1 if l>0 || if r=0 || -1*l if L<0
 */
int print_last_digit(int r)
{
int l = r % 10;
if (r > 0)
{
return (l);
}
else if (r == 0)
{
return (l);
}
else
{
return (-1 * l);
} 
}
