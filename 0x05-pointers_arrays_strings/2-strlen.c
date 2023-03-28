#include "main.h"

/**
 *_strlen - Entry point
 *Return: Always 0 (success)
 *@str: return value
*/

int _strlen(char *s)
{

	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	
	return (len);
}
