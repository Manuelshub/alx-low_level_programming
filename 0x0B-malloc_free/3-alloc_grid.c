#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array.
 * @width: the width of the array.
 * @height: height of the array.
 * Return: pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	/*checking both the width and the height*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*Allocating mem for the first subscript of the array*/
	ptr = malloc(height * sizeof(int *));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		/*Allocating mem for the second subscript of the array*/
		ptr[i] = malloc(width * sizeof(int **));
		if (ptr[i] == 0)
		{
			return (NULL);
		}
	}
	/*Initializing each element to 0*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
