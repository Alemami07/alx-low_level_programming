#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *return: Always 0 (success)
 *write a C program that gives a random number each time
 *and specifies wether number is positive or negative
 */

int main(void)
/*return value - 0 program ran successfully*/
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
		printf("%d n -number is positive\n, n");
	}
	else if (n < 0)
	{
		printf("%d n -number is negative\n, n");
	}
	else
	{
		printf("%d n,- number is equal to zero\n");
	}

	return (0);
}
