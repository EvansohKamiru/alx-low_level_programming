#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the last dugit stored in a variable n
*
* Return: Always (success)
*/
int main(void)
{
	int n, z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = z % 10;

	if (z > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, z);
	}
	else if ("z == o")
	{
		printf("Last digit of %d is %d and is 0", n, z);
	}
	else if ("z < 6 && z != 0")
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, z);
	}

return (0);
}
