#include "main.h"

/**
 *_putchar - a function that write the char
 *@c: data type
 *Return: 1 success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
