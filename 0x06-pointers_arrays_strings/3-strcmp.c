#include "main.h"
/**
*_strcmp -  a function that compares two strings.
*@s1: data type
*@s2: data type
*@i: data type
*Return: s1 - s2
*/
int _strcmp(char *s1, char *s2)
{
int flag=0, i=0;
while (s1[i] != '\0' && s2[i] != '\0') 
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
else
return (0);
}

