#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from a given number to 98.
 * @n: The starting number to print.
 *
 * Description: This function prints all natural numbers from the
 *               given number `n` up to 98, inclusive. The numbers are
 *               separated by a comma and a space. If `n` is greater than
 *               98, it prints in decreasing order; otherwise, it prints
 *               in increasing order. Finally, it ends the output with a new lin
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
