#include "main.h"
#include <stdio.h>

/**
 *_strncat - Entry point
 *Return: dest.
 * @dest: destination file
 *@src: source file
 *@n: conditioning integer
*/
char *_strncat(char *dest, char *src, int n)
{
	int p, q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}
		dest[p] = '\0';
	return (dest);
}
