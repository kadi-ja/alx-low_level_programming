#include <stdio.h>
/**
*main - prints tha alphabets in mowercase, followed by a \n
*Retun: always 0
*/
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
printf("\n");
return (0);
}
