#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int num, x;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (num = 0; num < height; num++)
	{
		arr[num] = (int *) malloc(sizeof(int) * width);
		if (arr[num] == NULL)
		{
			free(arr);
			for (x = 0; x <= num; x++)
				free(arr[x]);
			return (NULL);
		}
	}

	for (num = 0; num < height; num++)
	{
		for (x = 0; x < width; x++)
		{
			arr[num][x] = 0;
		}
	}
	return (arr);
}
