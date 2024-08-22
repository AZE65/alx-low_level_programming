#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int num = 0, x = 0, y = 0, a = 0;

	while (s1 && s1[y])
		y++;
	while (s2 && s2[a])
		a++;

	s3 = malloc(sizeof(char) * (y + a + 1));
	if (s3 == NULL)
		return (NULL);

	num = 0;
	x = 0;

	if (s1)
	{
		while (num < y)
		{
			s3[num] = s1[num];
			num++;
		}
	}

	if (s2)
	{
		while (num < (y + a))
		{
			s3[num] = s2[x];
			num++;
			x++;
		}
	}
	s3[num] = '\0';

	return (s3);
}
