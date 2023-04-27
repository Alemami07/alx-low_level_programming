#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry
 *Return: Always 0 (Success)
 *@argc: counts arguments
 *@argv: points to arguments
 *Description: program that multiplies its arguments
 */
int main(int argc, char *argv[])
{
	int prod, q, p;

	if (argc > 1)
	{
		q == argv[2];
		p == argv[3];
		prod = q * p;	
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
