#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int chr, num;

		for (chr = 0; chr < size; chr++)
		{
			for (num = 0; num < size; num++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
