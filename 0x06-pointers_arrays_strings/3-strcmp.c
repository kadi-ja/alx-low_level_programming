#include "main.h"
/**
*_strcmp -  a function that compares two strings.
*@s1: data type
*@s2: data type
*@i: data type
*Return: dest
*/
int _strcmp(char *s1, char *s2)
{
int flag=0, i=0;
while (s1[i] != '\0' && s2[i] != '\0') 
{
if (s1[i] != s2[i])
{
flag = 1;
break;
}
i++;
}
if (s1[i] != '\0' || s2[i] != '\0') 
return 1;
if (flg == 0)
return 0;
else
return 1;
}

