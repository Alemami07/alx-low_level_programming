#include "main.h"

/**
 *print_sign -  Entry point
 *Return: 1, 0, or -1  0 if otherwise
 *@n: return value
 *Description: write a C program that checks for sign
*/

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{	
		_putchar('-');
	}	
		return ('/');
}
