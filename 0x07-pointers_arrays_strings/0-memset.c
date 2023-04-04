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
	unsigned int p;

	p = 0;
	while (p < n)
	{
		*(s + p) = b;
		p++;
	}

		return (s);
}
