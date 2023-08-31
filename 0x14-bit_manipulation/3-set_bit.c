#include "main.h"
/**
 *set_bit - sets it value
 *@n: integer
 *@index: index at which to set but
 *Return: 1 if success -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index | *n));
	return (1);
}
