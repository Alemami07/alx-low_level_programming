#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 *check_dig - checks if a string is digit
 *@s: tring received
 *Return: 1 if Success 0 if fail
*/
int check_dig(char *s)
{
	unsigned long int counter;

	counter = 0;

	while (counter < strlen(s))
	{
		if (!(isdigit(s[counter])))
		{
		return (0);
		}
		counter++;
	}

	return (1);
}
/**
 *main - start
 *@argc: argument count
 *@argv: argument vector
 *Return: int
*/
int main(int argc, char *argv[])
{
	int p, sum, num;

	num = 0;
	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	p = 1;

	while (p < argc)
	{
		if (check_dig(argv[p]))
		{
		num = atoi(argv[p]);
		sum += num;
		}
		else
		{
			printf("Error\n");
		return (1);
		}
		p++;
	}

	printf("%d\n", sum);
	return (0);
}
