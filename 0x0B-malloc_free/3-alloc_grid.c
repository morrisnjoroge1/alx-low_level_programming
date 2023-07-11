#include "main.h"
#include <string.h>
#include <stdlib.h>
/*
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);/*failed memory allocation*/
		}
		for (j = 0; j < width; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0; /*each element to 0*/
	}
	return (grid);
}
