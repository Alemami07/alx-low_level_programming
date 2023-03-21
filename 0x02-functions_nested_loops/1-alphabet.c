#include "main.h"

/**
 *print_alphabet - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints _putchar
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
		_putchar('\n');

}
