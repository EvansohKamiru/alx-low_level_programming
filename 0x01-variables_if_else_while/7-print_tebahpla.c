#include <stdio.h>

/**
*  main -  a program to print alphabet z-a in small letters in \n
*
* Return: Always (success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

return (0);
}
