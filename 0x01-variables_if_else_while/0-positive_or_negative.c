#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that gives a random number each time
 *and specifies wether number is positive or negative
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	*for n>0, print: number is positive
	*for n<0, print: number is negative
	*for n=0, print: number is equal to zero
	*/

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is equal to zero\n", n);
	}

	return (0);
}
