#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: string data type 
 */
void print_rev(char *s)
{
 int i;
  for ( s[i] != '\0'; i = 0; i++)
  {
   _putchar(s[i]);
  }
 _putchar('\n');  
}
