#include "main.h"
/**
 *clear_bit - sets the value of a bit to zero for a given index
 *@n: integer
 *@index: index at whivh to set
 *Return: 1 of success -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
