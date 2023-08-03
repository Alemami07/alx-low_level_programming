#include "main.h"
/**
 *_is_natural - checks if a number is natural
 *Return: an int
 *@num: number to check
 *@square: guess number
 *Description: check for natural numbers
*/
int _is_natural(int num, int square)
{
	if ((square * square) > num)
	{
		return (-1);
	}
	if ((square * square) == num)
	{
		return (square);
	}

	return (_is_natural(num, square + 1));
}
/**
 *_sqrt_recursion - returns natural square root of an int
 *@n: integer provided
 *Return: integer
 *Description: write a function that returns natural sqrt
*/
int _sqrt_recursion(int n)
{
	return (_is_natural(n, 0));
}
