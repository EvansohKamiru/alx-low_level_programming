#include <stdio.h>

/**
* main - a program to print 0 - 10 in a newline
*
* Return: Always success
*/
int main(void)
{
	int num;

	for  (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
