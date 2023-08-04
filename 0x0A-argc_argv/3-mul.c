#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry
 *@argc: counts arguments
 *@argv: points to arguments
 *Return: an int
*/
int main(int argc, char *argv[])
{
	int prod, f, g;

	prod = 0;
	f = 0;
	g = 0;

	if (argc == 3)
	{
		f = atoi(argv[1]);
		g = atoi(argv[2]);
		prod = f * g;
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
