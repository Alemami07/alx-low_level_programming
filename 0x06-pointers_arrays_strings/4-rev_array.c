#include "main.h"

/**
 *reverse_array - Entry point
 *@a: string to be reversed
 *@n: number of elements
 *Description: function that reverses strings
*/
void reverse_array(int *a, int n)
{
	int u, v;

	for (u = 0; u < n--; u++)
	{
		v = a[u];
		a[u] = a[n];
		a[n] = v;
	}

}
