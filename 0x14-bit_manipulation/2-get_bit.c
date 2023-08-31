#include "main.h"
/**
 * get_bit - returns the value of the bit at a given index
 * @n: integer number
 * @index: index to locate
 * Return: value at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}
