#include <stdio.h>

/**
* main - a program to print 0 - 10 in a newline
*
* Return: Always success
*/
int main(void)
{
	int num;

	for  (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
return (0);
}
