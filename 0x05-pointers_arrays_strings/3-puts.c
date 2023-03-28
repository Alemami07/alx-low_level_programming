#include "main.h"

/**
 *_puts - Entry point
 *Description: program that prints a string
 *@str: value to be operated on
*/

void _puts(char *str)
{
	int i;


	for (i = 0; i < 64; i++)
	{
	_putchar(*str);
	str++;
	}

	_putchar('\n');
}
