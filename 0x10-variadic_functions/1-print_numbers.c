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
	unsigned int r, num;

	if (n == 0)
		return;
	va_start(args, n);

	for (r = 0; r < n; r++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (r != n - 1 && *separator != '\0')
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
