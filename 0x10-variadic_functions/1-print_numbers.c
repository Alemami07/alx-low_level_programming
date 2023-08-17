#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - prints integers passed
 *@separator: seperates integers printed
 *@n: number of integers passed
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int r;

	if (n == 0)
		return;
	if (*separator == '\0')
		separator = "";
	va_start(args, n);

	for (r = 0; r < n - 1; r++)
	{
		printf("%d", va_arg(args, int));
		printf("%s", separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
