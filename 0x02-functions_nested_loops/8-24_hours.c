#include "main.h"
/**
 *jack_bauer - a function that prints every minute of the day
 *
 *Return: always 0
 */
void jack_bauer()
{
int h, m;
for (h = 00; h <= 23; h++)
{
for (m = 00; m <= 59; m++)
{
  _putchar(h':'m');

}
_putchar ('\n');
}
}
