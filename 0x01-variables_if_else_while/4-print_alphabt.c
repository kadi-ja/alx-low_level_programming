#include <stdio.h>
/**
*main - print alphabets except q & e
*Return: 0 success
*/
int main(void)
{
char low, e, q;
e = 'e';
q = 'q';
for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
printf("\n");
return (0);
}
