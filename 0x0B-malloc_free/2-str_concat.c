#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int m, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = n = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[n] != '\0')
		n++;
	new = malloc(sizeof(char) * (m + n + 1));

	if (new == NULL)
		return (NULL);

	m = n = 0;
	while (s1[m] != '\0')
	{
		new[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		new[m] = s2[n];
		m++;
		n++;
	}

	return (new);


}
