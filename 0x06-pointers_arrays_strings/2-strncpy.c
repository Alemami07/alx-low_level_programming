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
	int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}

	return (dest);
}
