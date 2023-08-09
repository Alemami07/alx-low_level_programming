#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints min number of coin denominations for an amount of money
 *@argc: count
 *@argv: vector
 *Return: int
 */
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int p, n, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	coins = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (p = 0; p < 5 && n >= 0; p++)
	{
		while (n >= cents[p])
		{
			coins++;
			n -= cents[p];
		}
	}
	printf("%d\n", coins);
	return (0);

}

