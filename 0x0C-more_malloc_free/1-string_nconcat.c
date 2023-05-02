#include "main.h"
/**
 *string_nconcat - concatenates strings
 *@s1: destination
 *@s2: source
 *@n: number of bytes
 *
 *Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int p, q, get_l1, get_l2;

	p = 0;
	q = 0;
	get_l1 = 0;
	get_l2 = 0;

	while (s1 && s1[get_l1])
		get_l1++;
	while (s2 && s2[get_l2])
		get_l2++;

	if (n < get_l2)
		str = malloc(sizeof(char *) * (get_l1 + n + 1));

	else if (n >= get_l2)
		str = malloc(sizeof(char *) * (get_l1 + get_l2 + 1));
	if (str == NULL)
		return (NULL);

	while (p < get_l1)
	{
		str[p] = s1[p];
		p++;
	}

	while (n < get_l2 && p < (get_l1 + n))
		str[p++] = s2[q++];

	while (n >= get_l2 && p < (get_l1 + get_l2))
		str[p++] = s2[q++];

	str[p] = '\0';

	return (str);
}
