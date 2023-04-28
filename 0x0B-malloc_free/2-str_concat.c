#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int p, q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = q = 0;

	while (s1[p] != '\0')
		p++;
	while (s2[q] != '\0')
		q++;

	string = malloc(sizeof(char) * (p + q + 1));

	if (string == NULL)
		return (NULL);

	p = q = 0;
	while (s1[p] != '\0')
	{
		string[p] = s1[p];
		p++;
	}
	while (s2[q] != '\0')
	{
		string[p] = s2[q];
		p++;
		q++;
	}
	string[p] = '\0';

	return (string);
}
