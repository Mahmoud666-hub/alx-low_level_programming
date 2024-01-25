#include"function_pointers.h"
/**
 * array_iterator - print array
 * @array: parameter
 * @size: parameter
 * @action: pointer
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
{
exit(0);
}

unsigned long int i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
