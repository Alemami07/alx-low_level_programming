#include "main.h"

/**
 *_strchr - Entry point
 *@s: string to be searched
 *@c: character to be searched for
 *Return: pointer or null
 *Description: write a function that searches for a particular character
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
	{
		return (s);
	}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
