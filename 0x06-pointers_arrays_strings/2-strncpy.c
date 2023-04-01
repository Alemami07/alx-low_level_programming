#include "main.h"

/**
 *_strncpy - Entry point
 *Return: dest.
 *@dest: destination string
 *@src: source string
 *@n: number of elements to be copied
 *Description: function that copies a string to another
*/
char *_strncpy(char *dest, char *src, int n)
{
	int p;

	p = 0;

	while (p < n && src[p] != '\0')
	{
			dest[p] = src[p];
			p++;
	}

	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}
