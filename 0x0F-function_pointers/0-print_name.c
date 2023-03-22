#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: data type
 * @f - function of name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
