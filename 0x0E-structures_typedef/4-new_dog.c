#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *_strlen -returns length of a string
 *@s: string to evaluate
 *Return: int
 */
int _strlen(char *s)
{
	int p;

	p = 0;
	while (s[p] != '\0')
	{
		p++;
	}

	return (p);
}
/**
 *_strcpy - copies strings
 *@dest: destination string
 *@src: source string
 *Return: pointer to new string
 */
char *_strcpy(char *dest, char *src)
{
	int u;

	u = 0;
	while (src[u] != '\0')
	{
		dest[u] = src[u];
		u++;
	}
	dest[u] = '\0';
	return (dest);
}
/**
 *new_dog - creates a new dog
 *@name: name of new dog
 *@age: age of dog
 *@owner: dog guardian
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	return (NULL);

	newdog->name = malloc(sizeof(char) * (len1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
