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
	int prod, q;

	prod = 0;

	if (argc > 1)
	{
		for (q = 1; q < argc; q++)
		
			printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
