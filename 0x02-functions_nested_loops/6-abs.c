#include "main.h"

/**
 *_abs -  Entry point
 *Return: 1, 0, or -1  0 if otherwise
 *Description: write a C program that gives absolute value
 *@c: return value and value to be operated on
*/

int _abs(int c)
{

	int abs_value;

	if (c < 0)
	{
	abs_value = c * -1;
	return (abs_value);
	}
	return (c);
}
