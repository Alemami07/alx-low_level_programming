#include "main.h"

/**
 *print_array - Entry point
 *Return: void
 *@a: string to be printed
 *@n: number of elements in string
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i != n - 1)
	{
	printf("%d, ", a[i]);
	}
	else if (i == n - 1)
	{
		printf("%d", a[i]);
	}
	}
		printf("\n");

}
