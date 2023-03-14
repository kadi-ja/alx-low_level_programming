#include "main.h"

/**
*_pow_recursion - a function that returns the factorial of a given number.
 *@x: data type
 *@y: data type
 *Return: factovalue of x power of y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
return (x = x * _pow_recursion(x, y - 1));
}
