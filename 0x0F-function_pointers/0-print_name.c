#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - prints a name
 *@name: name to print
 *@f: pointer to function that actually does the printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	f(name);
}