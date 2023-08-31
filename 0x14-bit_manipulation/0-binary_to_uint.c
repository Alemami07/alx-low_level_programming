#include "main.h"
#include <stdlib.h>
/**
 *binary_to_uint -converts a binary number to unsigned int
 *@b: binary string literal
 *Return: unsigned int or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int dec;

	dec = 0;

	if (b == NULL)
		return (0);
	for (q = 0; b[q]; q++)
	{
		if (b[q] < '0' || b[q] > '1')
		{
			return (0);
		}
		dec = 2 * dec + (b[q] - '0');
	}
	return (dec);
}
