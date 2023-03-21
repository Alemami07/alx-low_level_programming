#include "main.h"
#include <unistd.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints _putchar
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');

	return (0);
}
