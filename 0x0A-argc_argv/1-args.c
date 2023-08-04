#include <stdio.h>
/**
 *main - return number of command line arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	/*make the compiler ignore unused variable*/
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);

}
