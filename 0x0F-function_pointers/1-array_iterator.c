#include <stdio.h>

/**
 * array_iterator - entry point
 * @array: size of triangle
 * @size: size of triangle
 * @action: size of triangle
 * Description: --
 * Return: --
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int num = 0;

	if (array == NULL || action == NULL)
		return;
	while (num < (int)size)
	{
		action(array[i]);
		num++;
	}
}
