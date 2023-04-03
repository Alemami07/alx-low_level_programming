#include "main.h"

/**
 *_memset - Entry point
 *Return: string s
 *@s: string to be ammended
 *@b: constant byte
 *@n: number of times to replace
*/
char *_memset(char *s, char b, unsigned int n)
{

	int u;
	unsigned int put;

	for (u = 0; s[u] != '\0'; u++)
	{
		put++;
	}

	for (put = 0; put < n; put++)

	{
		s[put] = b;
	}

		s[put] = '\0';

		return (s);
}
