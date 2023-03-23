#include "main.h"

/**
 *_isupper -  Entry point
 *Return: 1 if true,  0 if otherwise (success)
 *@c: return value
 *Description: write a C program that checks for lowercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
