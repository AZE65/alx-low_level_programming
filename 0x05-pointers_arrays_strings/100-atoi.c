#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, q, w, e, r, t;

	i = 0;
	q = 0;
	w = 0;
	e = 0;
	f = 0;
	t = 0;

	while (s[e] != '\0')
		e++;

	while (i < e && r == 0)
	{
		if (s[i] == '-')
			++q;

		if (s[i] >= '0' && s[i] <= '9')
		{
			t = s[i] - '0';
			if (q % 2)
				t = -t;
			w = w * 10 + t;
			r = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			r = 0;
		}
		i++;
	}

	if (r == 0)
		return (0);

	return (n);
}
