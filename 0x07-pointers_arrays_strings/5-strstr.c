#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a, d;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (d = 0;  needle[d] != '\0'; d++)
		{
			if (haystack[a + d] != needle[d])
				break;
		}
		if (!needle[d])
			return (&haystack[i]);
	}
	return (NULL);
}
