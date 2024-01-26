#include"function_pointers.h"
/**
 * int_index - give index
 * @array: parameter
 * @size: parameter
 * @cmp: parameter
 * Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{int i;
if (size <= 0 || array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
{
return (i);
}
else if (cmp(array[i]) == 0 && i == (size - 1))
{
return (-1);
}
}
return (i);
}
