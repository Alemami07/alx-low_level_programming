#include "main.h"

/**
 *_strcat - Entry point
 *Return: dest;
 *@dest: destination file
 *@src: source file
*/
char *_strcat(char *dest, char *src)
{
	int desleng, srcleng, i;

	desleng = 0;
	srcleng = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		desleng++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srcleng++;
	}
	for (i = 0; i < srcleng; i++)
	{
		dest[desleng + 1] = src[i];
	}

	return (dest);

}
