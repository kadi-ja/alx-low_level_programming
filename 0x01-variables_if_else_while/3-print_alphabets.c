#include <stdio.h>
/**
* main - print lower and uppercase letters
* Return: always 0
*/
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
printf("\n");
return (0);
}
