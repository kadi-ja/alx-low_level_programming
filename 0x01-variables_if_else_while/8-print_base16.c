#include <stdio.h>
/**
*main -  prints all the numbers of base 16 in lowercase
*Return: always 0
*/
int main(void)
{
char low, low1;
for (low = '0'; low <= '9'; low++)
putchar(low);
for (low1 = 'a'; low1 <= 'f'; low1++)
putchar(low1);
putchar('\n');
return (0);
}
