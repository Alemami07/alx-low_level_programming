#include<stdio.h>
int main(void)
{
	int intType;
	float floatType;
	long longType;
	char charType;

		printf("Size of int: %zu bytes\n", sizeof(intType));
		printf("Size of float: %zu bytes\n", sizeof(floatType));
		printf("Size of double: %zu bytes\n", sizeof(longType));
		printf("Size of char: %zu byte\n", sizeof(charType));
	return (0);
}
