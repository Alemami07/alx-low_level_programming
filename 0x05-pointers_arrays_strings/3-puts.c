#include "main.h"

/**
 *_puts - Entry point
 *Description: program that prints a string
 *@str: value to be operated on
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

		_putchar('\n');
}
