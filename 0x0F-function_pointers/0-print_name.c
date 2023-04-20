#include "function_pointers.h"
/**
 * print_name - Prints a name
 *Return: void
 *@name: name to be printed
 *@f: fun ction to be called
*/
void print_name(char *name, void (*f)(char *))
{
	if (!(name == NULL && f == NULL))
	f(name);

	else
		return;
}
