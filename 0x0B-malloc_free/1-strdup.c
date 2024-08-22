#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int num, a;

	num = 0;
	a = 0;

	if (str == NULL)
		return (NULL);

	while (str[a])
		a++;

	dup = malloc(sizeof(char) * (a + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[num] = str[num]) != '\0')
		num++;

	return (dup);
}
