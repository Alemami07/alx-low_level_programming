#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main- executes function
 *@argc: counts
 *@argv: vector
 *Return: int solution
 */
int main(int __attribute__((__unused__)) argc,  char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '%'  && num2 == 0) ||
		(*op == '/'  && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
