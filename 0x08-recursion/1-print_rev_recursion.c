#include "main.h"
/**
 *_print_rev_recursion -reverses a string recursively
 *Return: void
 *@s: string to be reversed
 *Description: Write a function that prints the reverse of a string
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
