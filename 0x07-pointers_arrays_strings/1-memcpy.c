#include "main.h"
/**
 *_memcpy - Entry point
 *@dest: destination string
 *@src: source string
 *@n: integer value
 *Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);

}
