#include "main.h"
/**
 *_puts_recursion - Entrance
 *Return: void
 *@s: string to be recursively printed
 *Description: write a functions that prints a string
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
