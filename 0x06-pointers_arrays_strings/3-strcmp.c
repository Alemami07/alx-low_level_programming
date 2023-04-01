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
	int i;

	/*for (i = 0; (s1[i] != '\0'; || s2 != '\0';) i++)*/
	i =0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else
		return (0);
	}
	i++;

	return (0);
}
