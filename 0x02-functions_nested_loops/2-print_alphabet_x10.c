#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints _putchar
*/

void print_alphabet_x10(void)
{
	int j = 0;

	char ch;

	while (j++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
	}

}
