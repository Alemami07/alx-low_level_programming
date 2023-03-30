#include "main.h"
/**
 *puts2 - Prints even numbers of a given string
 *Return: void
 *@str: string to be worked on
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
