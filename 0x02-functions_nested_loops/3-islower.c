#include "main.h"

/**
 *_islower -  Entry point
 *Return: 1 if true,  0 if otherwise (success)
 *c: return value
 *Description: write a C program that checks for lowercase
*/

int _islower(int c)
{	
	if (c >= 'a' && c <= 'z')
	{	
		return (1);
	}
	else
		return (0);
}
