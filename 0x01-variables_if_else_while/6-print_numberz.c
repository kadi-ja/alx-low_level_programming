#include <stdio.h>
/**
*main - prints all single digit numbers of base 10 using putchar
*Return: always 0
*/
int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
putchar(d);
printf("\n");
return (0);
}
