#include "main.h"
/**
*string_toupper - a function that changes all lowercase letters
*of a string to uppercase.
*@str: data type
*Return: uppercase string
*/
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
}
else
{
str[i] = str[i];
}
}return (str);
}
