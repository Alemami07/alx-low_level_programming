#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - contenates strings up to the first n bytes of the second
 *@s1: first string
 *@s2: second string
 *@n: number of bytes
 *Return: pointer t string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int p, q, u, v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = q = 0;
	while (s1[p] != '\0')
		p++;
	while (s2[q] != '\0')
		q++;

	if (n < q)
		new = malloc(sizeof(char) * (p + n + 1));
	else
		new = malloc(sizeof(char) * (p + q + 1));

	v = u = 0;
	while (s1[u] != '\0')
	{
		new[u] = s1[u];
		u++;
	}

	while (n < q && (u < p + n))
	{
		new[u++] =  s2[v++];
	}

	while (n >= q && (u < p + q))
	{
		new[u++] = s2[v++];
	}

	new[u] = '\0';

	return (new);
}
