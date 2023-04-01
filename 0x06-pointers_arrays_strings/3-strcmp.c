#include "main.h"
/**
 *_strcmp - Entry point
 *@s1: first string
 *@s2: second string
 *Return: a positive int, or a negative int, or 0.
 *Description: function that compares strings like strcmp
*/
int _strcmp(char *s1, char *s2)
{
	int q;

	q = 0;

	while ((s1[q] != '\0') || (s2[q] != '\0'))
	{
	if (s1[q] != s2[q])
	{
	if (s1[q] < s2[q])
		return (s1[q] - s2[q]);
	else if (s1[q] > s2[q])
		return (s1[q] - s2[q]);
	}
	else
		return (0);
	}
	q++;

	return (0);
}
