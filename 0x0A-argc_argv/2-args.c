#include <stdio.h>
/**
 *main - Entry
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0 (Success)
 *Description: program that prints every argument
*/
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
