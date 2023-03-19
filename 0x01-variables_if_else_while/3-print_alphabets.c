#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that prints the alphabet in lowercase
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
