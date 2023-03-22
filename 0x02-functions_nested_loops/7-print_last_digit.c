#include "main.h"

/**
 *print_last_digit -  Entry point
 *Return: Always 0.
 *Description: write a C program that gives prints last digit
 *@c: return value and value to be operated on
*/

int print_last_digit(int c)
{
	int last = c % 10;

	if (last < 0)
	{
	last = last * -1;
	}
		_putchar(last + '0');
	return (last);

}
