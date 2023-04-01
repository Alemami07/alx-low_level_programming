#include "main.h"
/**
 *string_toupper - Entry point
 *Return: string d
 *@d: string to be changed
 *Description: function that changes lowercase
 *to be uppercase
 */
char *string_toupper(char *d)
{
	int k;

	k = 0;
	while (d[k] != '\0')
	{
		if (d[k] >= 'a' && d[k] <= 'z')
			d[k] = d[k] - 32;
		k++;
	}

	return (d);
}
