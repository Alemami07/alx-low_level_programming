#include "main.h"
/**
 *_pow_recursion - Entrance
 *Return: integer
 *@x: base int
 *@y: exponent int
 *Description: function that returns value of an exponentiation
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);

	return (x * _pow_recursion(x, (y - 1)));

}
