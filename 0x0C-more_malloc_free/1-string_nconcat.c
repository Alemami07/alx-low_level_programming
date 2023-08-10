#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - concatenates strings up to the nth byte of second strinh
 *@s1: first string
 *@s2: second string
 *n: length of s2 to copy
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int p, q, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*getting the length of both strings*/
	p = q = 0;
	while (s1[p] != '\0')
		l1++;
	while (s2[q] != '\0')
		l2++;
	if (n < l2)
		new = malloc(sizeof(char) * (l1 + n + 1));
	else
		new = malloc(sizeof(char) * (l1 + l2 + 1));

	if (new == NULL)
		return (NULL);
/*copying the first string into the new string*/
	while (p < l1)
	{
		new[p] = s1[p];
		p++;
	}
/*copying the specified bytes of the second string into the new string*/
	while (n < l2 && p < (l1 + n))
	{
		new[p++] = s2[q++];
	}
	while (n >= l2 && p < (l1 +l2))
	{
		new[p++] = s2[q++];
	{

	new[p++] = '\0';

	return (new);
	
}
