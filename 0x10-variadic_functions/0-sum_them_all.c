#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sums all it's arguments
 *@n: number of arguments passed
 *Return: sum, else 0
 */
int sum_them_all(unsigned int n, ...)
{
	va_list args;
	unsigned int r, sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(args, n);
		for (r = 0; r < n; r++)
		{
			sum += va_arg(args, int);
		}
	va_end(args);
	return (sum);
}
