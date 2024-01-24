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
long unsigned int i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
