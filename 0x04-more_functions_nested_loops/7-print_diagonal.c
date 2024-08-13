#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int chr, num;

		for (chr = 0; chr < n; chr++)
		{
			for (num = 0; num < n; num++)
			{
				if (num  == chr)
					_putchar(92);
				else if (num  < chr)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
