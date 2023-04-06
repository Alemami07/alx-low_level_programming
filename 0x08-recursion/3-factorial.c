#include "main.h"
/**
 *factorial - Entry point
 *@n: number to work with
 *Return: integer
 *Description: function that calculates factorials of integeris
*/
int factorial(int n)
{

	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (1);

	return (n * factorial(n - 1));
}
