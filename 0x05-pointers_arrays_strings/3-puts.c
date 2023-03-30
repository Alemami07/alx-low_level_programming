#include "main.h"

/**
 *_puts - Entry point
 *Description: program that prints a string
 *@str: value to be operated on
*/

void _puts(char *str)
{
	/**str = str[];*/
	int i;

	i = 0;

	while (i > 0 && *str != '\0') 
	{
		_putchar(*str);
		i++;
	} 

	_putchar('\n');
}
