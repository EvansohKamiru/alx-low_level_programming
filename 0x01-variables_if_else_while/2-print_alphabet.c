#include <stdio.h>

/**
*  main -  a program to print alphabet a-x in small letters in \n
*
* Return: Always (success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

return (0);
}
