#include "main.h"

/**
 *more_numbers - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints the alphabet in lowercase
*/
void more_numbers(void)

{
	int n;

	int c;
	
	c = 0;

	while (c <= 9)
	{
	for (n = 0; n <= 14; n++)
	{
		_putchar(n);
	}
		_putchar('\n');
		c++;
	} 
}
