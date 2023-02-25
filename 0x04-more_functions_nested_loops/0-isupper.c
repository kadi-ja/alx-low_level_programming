#include "main.h"
/**
 *_isupper - a function that checks for uppercase character.
 *@c: int
 *Return: alawys 0
 */
int _isupper(int c)
{
  if ((c > 64) && (c < 91))
{
return (1);
}
else
{
return (0);
}
}
