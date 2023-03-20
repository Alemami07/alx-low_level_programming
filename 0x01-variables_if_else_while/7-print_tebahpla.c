#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints the alphabet in lowercase
*/

int main(void)
{
	char th;

	for (th = 'z'; th >= 'a'; th--)
	{
		putchar(th);
	}
		putchar('\n');
	return (0);
}
