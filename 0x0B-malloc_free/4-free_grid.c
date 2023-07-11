#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid -  free up a 2d array grid
 *
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return ;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]); /*for row*/
	}
	free(grid); /*free grid*/
}
