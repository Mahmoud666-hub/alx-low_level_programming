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
int i, x = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
r = malloc(height * sizeof(int *));
if (r == NULL)
{
free(r);
exit(0);
}
for (i = 0; i < width; i++)
{
r[i] = malloc(width * sizeof(int));
if (r[i] == NULL)
{
free(r[i]);
exit(0);
}
}
return (r);
}
