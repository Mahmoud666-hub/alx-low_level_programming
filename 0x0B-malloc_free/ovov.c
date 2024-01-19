#include "main.h"

/**
 * alloc_grid - make 2d array
 *
 * @width: width of array
 * @height: heght of array
 *
 * Return: the made array
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}