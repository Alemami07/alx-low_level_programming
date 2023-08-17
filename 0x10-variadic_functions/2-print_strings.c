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

	va_start(args, n);

	for (q = 0; q < n; q++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (q != n - 1 && separator != NULL)
		printf("%s", separator);

	}
	printf("\n");

	va_end(args);
}
