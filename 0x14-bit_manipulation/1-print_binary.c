#include "main.h"
/**
 * print_binary - prints binary representation of decimals
 * @n: decimal number
 * Return: nothng
 */
void print_binary(unsigned long int n)
{
	unsigned long int pin;
	int v, num;

	num = 0;

	for (v = 63; v >= 0; v--)
	{
		pin = n >> v;

		if (pin & 1)
		{
		_putchar('1');
		num++;
		}
		else if (num)
		_putchar('0');
	}
	if (!num)
	_putchar('0');
}
