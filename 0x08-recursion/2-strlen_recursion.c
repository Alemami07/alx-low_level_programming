#include "main.h"

/**
 *_strlen_recursion - Returns the length of a string recursively
 *@s: string to check its length
 *Return: void
 *Description: write a function that gives the length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
