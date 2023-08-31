#include "main.h"
/**
 * flip_bit - returns number of bits to flip
 * @n: first int
 * @m: second int
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int u, num;
	unsigned long int pin, X;
	X = n ^ m;

	for (u = 63; u >= 0; u--)
	{
		pin = X >> u;
		if (pin & 1)
			num++;
	}
	return (num);
}
