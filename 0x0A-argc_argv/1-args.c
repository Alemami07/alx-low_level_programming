#include <stdio.h>
#include "main.h"
/**
 *main - return number of command line arguments
 *@argc: argument count
 *@argv: argument vector
 *Description: does what is specified by the main
 *Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	/*Make the compiler ignore unused variable argv*/
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
