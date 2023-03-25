#include <stdio.h>

/**
 *main  Entry point
 *Return: Always 0 (success)
 *Description: write a C program that multiplies two integers
*/

int main(void)
{
	char *c;
	//int j, k, l;

	/*j = c % 3;
	k = c % 5;
	l = c % 15;*/


	for (*c = "1"; *c <= "100"; *c++)
	{
	//if ((j != 0) && (k != 0) && (k != 0))

		printf("%d ", *c);
	}
	/*if (j = 0)
	{
		printf("fizz ");
	}
	else if (k = 0)
	{
		printf("buzz ");
	}
	else if (k = 0)
	{
		printf("fizzbuzz ");
	}
	*/
		printf("\n");

	return (0);
}
