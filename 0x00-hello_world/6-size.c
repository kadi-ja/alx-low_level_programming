#include <stdio.h>
/**
* main - prints the size of various types on the computer
* Return: 0 (sucess)
*/
int main(void)
{
int i;
char c;
float f;
long int l;
long long int d;
printf("Size of a char: %zu byte(s)\n",sizeof(c));
 printf("Size of an int: %zu byte(s)\n",sizeof(i));
 printf("Size of a long int: %zu byte(s)\n",sizeof(l));
printf("Size of a long long int: %zu byte(s)\n",sizeof(d));
 printf("Size of a float: %zu byte(s)\n",sizeof(f));
return (0);
}



