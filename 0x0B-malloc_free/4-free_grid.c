#include"main.h"
/**
 * free_grid - free previous malloc
 * @grid: parameter
 * @height: parameter
 * Return: void
*/
void free_grid(int **grid, int height)
{
int i = 0;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
