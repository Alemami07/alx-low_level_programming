#include "main.h"

/**
 *swap_int - Entry point
 *Return void.
 *@a: first variable
 *@b: second variable
 *Description: write a program that swaps values
 *of two variables
*/

void swap_int(int *a, int *b)
{
	int j = *a;

	*a = *b;
	*b = j;

}
