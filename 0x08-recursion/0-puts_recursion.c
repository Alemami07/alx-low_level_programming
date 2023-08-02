#include "main.h"
/**
 *_puts_recursion - Prints a string recursively
 *Return: void
 *@s: string to be printed
 *Description: function that prints a string recursively
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
