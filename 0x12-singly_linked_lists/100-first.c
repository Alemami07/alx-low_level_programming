#include <stdio.h>

void first(void)__attribute__((constructor));
/**
 *first - this function will be executed before the main at compile time
 *Return: nothing
 */
void first(void)
{
	printf("You're beat! And yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
