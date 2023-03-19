#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *Description: write a C program that gives a random number each time,
 *gets the last digit, and says stuff about it.
*/

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

/**
 *Description - To solve this problem
 *get last digit of n
 *set last digit = p
 *if p = 0, print (Last digit of n is p and is 0)
 *if p > 5, print (Last digit of n is p and is greater than 5)
 *if p < 6, print (Last digit of n is p and is less than 6 and not 0)
 */

	int p = (n % 10);


{
	if (p == 0)
		printf("Last digit of %d is %d and is 0\n", n, p);

	else if (p > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, p);

	else if (p < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, p);
}
	return (0);
}
