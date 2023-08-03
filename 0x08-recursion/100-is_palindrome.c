#include "main.h"
/**
 *_strlen_recursion - returns length of string
 *@s: string to evaluate
 *Return: an int or 0 if empty
 *Description: find length of given string
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * is_palindrome - checks for palindromes
 *@s: string to be evaluated
 *Return: an integer
 *Description: check if given string is a palindrome
*/
int is_palindrome(char *s)
{
	int p, q, len;

	len = _strlen_recursion(s);
	p = 0;
	q = len - 1;
/*Get the midpoint of the string and compare the LHS to the RHS*/

	if (p < len / 2 && q > len / 2)
	{
		if (s[p] != s[q])
		{
			return (0);
		}
		if (s[p] == s[q])
		{
			return (1);
			p += 1;
			q -= 1;
		}
	}
	return (is_palindrome(s));
}
