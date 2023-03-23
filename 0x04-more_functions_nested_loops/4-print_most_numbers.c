#include "main.h"

/**
 *print_most_numbers - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that multiplies two integers
*/

void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')

	if (c != '2' && c != '4')
	{
		_putchar(c);
		c = c + 1;
	}
	else
	{
		c = c + 1;
	}
	{
		_putchar('\n');
	}
}
