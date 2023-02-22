#include <unistd.h>
#include <stdio.h>
/**
*main - prints _putchar
*Return: always 0
*/
int _putchar(char c)
  {
	return (write(1, &c, 1));
}
int main(void)
{
char *w = "_putchar";
 while (*w)
   {
_putchar(*w);
     w++;
}
putchar('\n');
return (0);
}
