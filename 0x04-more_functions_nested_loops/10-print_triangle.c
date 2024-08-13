#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int chr, num;

		for (chr = 1; chr  <= size; chr++)
		{
			for (num = i; num  < size; num++)
			{
				_putchar(' ');
			}

			for (num = 1; num  <= chr; num++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
