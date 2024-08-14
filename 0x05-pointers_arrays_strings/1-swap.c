 #include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input  pointer
 * @b: input  pointer
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
