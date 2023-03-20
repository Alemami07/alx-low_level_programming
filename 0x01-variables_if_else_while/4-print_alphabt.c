#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints the alphabet in lowercase
*/

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')

	if (ch != 'q' && ch != 'e')

	{
		putchar(ch);
		ch = ch + 1;
	}
	else
	{
		ch = ch + 1;
	}
	{
		putchar('\n');
	}

	return (0);
}
