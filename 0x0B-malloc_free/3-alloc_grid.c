#include"main.h"
/**
 * alloc_grid - parameter
 * @width: parameter
 * @height: parameter
 * Return: pointer
*/
int **alloc_grid(int width, int height)
{
int **r;
int i = 0;
int t = 0, x = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
r = malloc(height * sizeof(int *));
if (r == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
r[i] = malloc(width * sizeof(int));
if (r[i] == NULL)
{
for (x = 0; x < i; i++)
{
free(r[x]);
}
free(r);
return (NULL);
}
for (t = 0; t < width; t++)
{
r[i][t] = 0;
}
}
return (r);
}
