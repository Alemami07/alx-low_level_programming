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
	int desleng, srcleng, i;

	desleng = 0;
	srcleng = 0;
	
	{
	for (i = 0; dest[i] != '\0'; i++)
	{
		desleng++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srcleng++;
	}
	for (i = 0; i < n; i++)
	{
		dest[desleng + i] = src[i];
	}
	}
		
		return (dest);
}
