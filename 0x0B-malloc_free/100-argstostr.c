#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *argstostr - concatenates strings
 *@ac: argument count
 *@av: argument vector
 *Return: pointer to new string or NULL if fail
*/
char *argstostr(int ac, char **av)
{
	int u, v, p, q;
	char *new;

	u = v = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	v = 0;

/*getting the size of the new string*/
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			v++;
	}
	v += ac;

	new = malloc(sizeof(char) * v + 1);
	if (new == NULL)
	{
		free(new);
			return (NULL);
	}

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
	{
		new[u] = av[p][q];
		u++;
	}
	if (new[u] == '\0')
	{
		new[u++] = '\n';
	}
	}

	return (new);
}
