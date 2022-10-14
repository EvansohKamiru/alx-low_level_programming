#include <stdio.h>

/**
* main - Entry point
*
* Description: 'Write a C program that prints the size
* of various types on the computer it is compiled and run on.
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package libc6-dev-i386 on your
* Linux to test the -m32 gcc option'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char mychar;
	int myint;
	long int mylongint;
	long long int mylonglongint;
	float myfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(mychar));
	printf("Size of a int: %lu byte(s)\n", sizeof(myint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(mylongint));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(mylonglongint));
	printf("Size of a float: %lu byte(s)\n", sizeof(myfloat));
	return (0);
}
