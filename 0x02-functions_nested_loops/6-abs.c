#include "main.h"
/**
 *_abs - computes the absolute value of an integer.
 *@r: int type param
 *Return: always 0
 */
int _abs(int r)
{
int result = r * -1;
if (r > 0)
{
return (r);
}
else if (r == 0)
{
return (r);
}
else
{
return (result);
}
return (0);
}
