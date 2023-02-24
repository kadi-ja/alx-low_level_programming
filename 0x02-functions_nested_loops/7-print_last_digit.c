#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number.
*@d: data type integer
*Return: always 0
*/
int print_last_digit(int d)
{
int l = d % 10;
int n = -1 * l;
if (d > 0)
{ 
_putchar('0' + l);
}
else  if (d == 0)
{ 
return (l);
_putchar('0' + l);
}
else  
{ 
return (n);
_putchar('0' + n);
}
}
