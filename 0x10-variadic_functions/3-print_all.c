#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 *print_all - prints all arguments
 *@format: format to be printed
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *s, *sep;
	int f;
	va_list aps;

	sep = "";
	f = 0;

	va_start(aps, format);
	if (format)
	{
		while (format[f])
		{
			switch (format[f])
			{
				case 'c':
					printf("%s%c", sep, va_arg(aps, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(aps, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(aps, double));
					break;
				case 's':
					s = va_arg(aps, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
			default:
					f++;
					continue;
			}
			sep = ", ";
			f++;
		}
	}
	printf("\n");
	va_end(aps);

}
