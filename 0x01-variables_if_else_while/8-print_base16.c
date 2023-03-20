#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints the alphabet in lowercase
*/

int main(void)
{
	int oh;
	int ph;

	for (oh = '0'; oh <= '9'; oh++)
	{
		putchar(oh);
	}

	for (ph = 'a'; ph <= 'f'; ph++)
	{
		putchar(ph);
	}
		putchar('\n');

	return (0);
}
