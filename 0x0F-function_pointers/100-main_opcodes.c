#include <stdlib.h>
#include <stdio.h>
/**
 *main - entry
 *@argc: counts
 *@argv: points
 *Return: int
 */
int main(int argc, char *argv[])
{
	int byt, j;
	char *bar;

	if (argc != 2)
	{
		printf("Error\n");
	exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	bar = (char *)main;

	for (j = 0; j < byt; j++)
	{
		if (j == byt - 1)
		{
			printf("%02hhx\n", bar[j]);
		}
		printf("%02hhx ", bar[j]);
	}

	return (0);
}
