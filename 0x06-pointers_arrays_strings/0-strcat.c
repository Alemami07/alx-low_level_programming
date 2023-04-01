#include "main.h"
/**
 *_strcat - Entry point
 *Return: dest
 *@dest: destination string
 *@src: source string
 *Description: function that copies strings
*/
char *_strcat(char *dest, char *src)
{
	int p;
	int q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	q = 0;
	while (src[q] != '\0')
	{
		p++;
		q++;
	}
		dest[p] = '\0';

		return (dest);
}
