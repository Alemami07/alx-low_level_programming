#include <unistd.h>
/**
 * _putchar -prints to stdout
 * @c: char to be printed 
 * Return: on successs (1) on fail (-1)
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
