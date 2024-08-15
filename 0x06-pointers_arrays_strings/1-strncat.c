#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0;  i < n && scr[i] != '\0'; i++)
		dest[c + i] = scr[i];
	dest[c + i] = '\0';
	return (dest);
}
