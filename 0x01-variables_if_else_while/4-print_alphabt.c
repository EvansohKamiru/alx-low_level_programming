#include <stdio.h>

/**
* main - a [program to print a-z except q and e
*
* Return: Always success
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
return (0);
}
