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
	int t;
	int q;
	char *ptr;
	char *ptr1;
	int lent;

	lent = 0;
	*ptr1 = s;
	*ptr = '\0';

	for (t = 0; s[t] != '\0'; t++)
	{
		lent++;
	}
	for (q = 0; q < lent; q++)
	{
	if 
		(s[q] == c)
	{
		*ptr1 = s[q];
		return (ptr1);
	}
	else
		return (ptr);
	}
	return (s);
}
