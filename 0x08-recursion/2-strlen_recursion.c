#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int ntr = 0;

	if (*s > '\0')
{
	ntr +=  _strlen_recursion(s + 1) + 1;
}
return (ntr);
}
