#include "main.h"
/**
 *_isalpha -  checks for alphabetic character.
 *@c: char type letter
 *Return: always 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{e
return (0);
}
