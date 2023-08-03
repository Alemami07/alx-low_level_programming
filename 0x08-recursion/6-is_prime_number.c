#include "main.h"
/**
 *_is_prime - checks for prime numbers
 *@p: number to be checked
 *@q: iterator
 *Return: 1 if success, 0 if fail
 *Description: function that identifies primes
*/
int _is_prime(int p, int q)
{
	if (p % q != 0)
	{
	return (1);
	q -= 1;
	}

	else if (p % q == 0)
	{
	return (0);
	}


	return (_is_prime(p, q));
}
/**
 *is_prime_number - checks if a number is a prime
 *@n: number to check
 *Return: an int
 *Description: function that checks for prime numbers
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
		return (_is_prime(n, (n - 1)));

}
