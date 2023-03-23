#include "main.h"

/**
 *_isdigit - Entry point
 *Return: 1 if true, 0 if otherwise
 *@c: return value
 *Description: Write a C program that checksfor digits
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
