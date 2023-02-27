#include "main.h"
/**
 *swap_int -  a function that swaps the values of two integers.
 *@a: data type
 *@b: data type
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
