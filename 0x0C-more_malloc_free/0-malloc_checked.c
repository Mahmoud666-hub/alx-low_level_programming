#include"main.h"
/**
 * malloc_checked - allocate memory
 * @b: parameter
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
void *y;
y = malloc(b);
if (y == NULL)
{
exit(98);
}
return (y);
}
