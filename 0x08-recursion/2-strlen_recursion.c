#include "main.h"
/**
 *_strlen_recursion - Entry point
 *@s: string to be calculate
 *Return: int
 *Description: function that calculates length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
