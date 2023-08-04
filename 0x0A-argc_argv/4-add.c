#include <stdio.h>
#include <stdlib.h>
/**
 *main - start
 *@argc: argument count
 *@argv: argument vector
 *Return: int
*/
int main(int argc, char *argv[])
{
	int p, sum, num;

	num = 0;
	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (p = 0; p < argc; p++)
	{
	num = atoi(argv[p]);

	if (num < 1)
	{
		printf("Error\n");
		return (1);
	}
		sum += num;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
