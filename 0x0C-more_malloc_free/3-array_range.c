#include"main.h"
/**
 * array_range - array allocate
 * @min: parameter
 * @max: parameter
 * Return: pointer
*/
int *array_range(int min, int max)
{int *p;
int i = 0, y = 0;
if (min > max)
{
return (NULL);
}
p = malloc(((max - min) + 1) * sizeof(int));
if (p == NULL)
{
free(p);
return (NULL);
}
for (i = min; i <= max;)
{
p[y] = i;
i++;
y++;
}
return (p);
}
