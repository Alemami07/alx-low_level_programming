#include <stdio.h>
/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: ALways (0) Success
 *Description: program that prints it's name
*/
int main(int argc, char *argv[])
{
	if (!(argc > 1))
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
