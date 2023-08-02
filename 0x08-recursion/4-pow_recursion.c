#include "main.h"
/**
 *_pow_recursion - returns the exponentiation of two integers
 *Return: an integer
 *@x: first int
 *@y: second int
 *Description: write a function that returns an exponentiation
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 1)
	{
		return (x);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
