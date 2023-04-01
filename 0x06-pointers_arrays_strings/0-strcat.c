#include "main.h"

/**
 *_strcat - Entry point
 *Return: dest;
 *@dest: destination file
 *@src: source file
*/
char *_strcat(char *dest, char *src)
{
	int len, lon, i;
	
	i = 0;
	len = 0;
	lon = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		lon++;
	}
	{
		dest[len + 1] = src[i];
	}
	return (dest);

}
