#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that gives a random number each time
 *and specifies wether number is positive or negative
*/

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'y'; ch++)
	{
		putchar(ch);
	}

	ch = 'z';
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
