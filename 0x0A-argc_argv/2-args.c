#include <stdio.h>
/**
 *main - Start
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0
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
