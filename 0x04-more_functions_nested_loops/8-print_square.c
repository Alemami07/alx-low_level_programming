#include "main.h"
/**
 *print_square - Entry point
 *@size: size of square
 *Return value 0.
 *Description: program thst prints sqaure
 */

void print_square(int size)
{
	int k, m;

	for (k = 0; k < size; k++)
	{
	for (m = 0; m < size; m++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}

	if (size == 0)
	{
		_putchar('\n');
	}
}
