#include "main.h"
/**
 *factorial - returns the factorial of a given number
 *@n: given number
 *Return: an integer
 *Description: write a funcion that returns the factorial of a number
*/
int factorial(int n)
{
	if (!(n < 0))
	{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
	}

	return (-1);
}
