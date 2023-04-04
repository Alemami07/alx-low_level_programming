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
	char *ptr, *ptr1;
	char w;
	int g;

	ptr1 = &w;
	w = '\0';

	for (g = 0; s[g] != '\0'; g++)
	{
	if (s[g] == c)
	{
		ptr = &s[g];
		return (ptr);
	}
	}
		return (ptr1);
}
