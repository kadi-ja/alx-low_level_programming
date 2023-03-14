#include "main.h"

/**
 *factorial - a function that returns the factorial of a given number.
 *@s: data type
 Return: factorial 
 */

int factorial(int n)
{
if (n < 0)
{
return(-1);
}
if (n == 0)
{
return(1);
}
n = n * factorial(n - 1);
return (n);
}
