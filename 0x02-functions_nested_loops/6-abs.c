#include "main.h"
/**
 *_abs - computes the absolute value of an integer.
 *
 *Return: always 0
 */
int _abs(int r)
{
int result = r * -1;
if (r > 0)
{
_putchar(r);
}
else if (r == 0)
{
_putchar(r);
}
else
{
return (result);
}
return (0);
}
