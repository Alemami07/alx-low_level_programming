#include "main.h"
/**
 * get_endianness - checks size of machine endian
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *b = (char *) &e;

	return (*b);
}
