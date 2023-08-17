#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints strings
 *@separator: separates strings printed
 *@n: number of strings to print
 *Return: nothing
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	va_list args;
	unsigned int q;
	char *str;

	if (n == 0)
		return;

	va_start(args, n);

	for (q = 0; q < n; q++)
	{
		str = va_arg(args, char *);
		printf("%s", str);
		if (q + 1 != n)
	{
		if (*separator == '\0')
		break;
		printf("%s", separator);
	}
	}
	printf("\n");

	va_end(args);
}
