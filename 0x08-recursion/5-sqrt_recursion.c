#include "main.h"

/**
*_sqrt_recursion - a function that returns the natural square root of a number.
 *@n: data type
 *Return: square root of the number 
 */

int _sqrt_recursion(int n)
{

return (helper(n, 1));
}

/**
*helper - a function helps to find the square
 *@n: data type
 *@i: data type 
 *Return: square root of the number 
 */

 int helper(int n, int i)
{
int square = i * i;

if (square == n)

    return (i);

 else if (square < n)

    return (helper(n, i + 1));

 else

    return (-1);
return(0);
 }
