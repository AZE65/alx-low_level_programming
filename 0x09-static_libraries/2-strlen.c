#include "main.h"

/**
 * _strlen - returns the length of a string
 * @st: string pointers input
 *
 * Return:  length of string
 */
int _strlen(char *st)
{
	int num;

	num = 0;

	while (st[num] != '\0')
	{
		num++;
	}

	return (num);
}
