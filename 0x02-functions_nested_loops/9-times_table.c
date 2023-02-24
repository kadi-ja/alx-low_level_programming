#include "main.h"
/**
 *times_table - a function that prints the 9 times table, starting with 0
 *Return: always 0
 */
void times_table(void)
{
  int a = 0;
  int b = 0;
  int c = a * b;
  for (a = 0; a >= 9; a++)
    {
      for (b = 0; b>= 9; b++)
	{
	  _putchar(c);
	  _putchar(',');
	  _putchar(' ');
}
      _putchar('\n');
    }
}
