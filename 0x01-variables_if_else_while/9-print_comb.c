#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints the alphabet in lowercase
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)

	{
	if (num < '9')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	else
		putchar(num);
	}
	return (0);
}
