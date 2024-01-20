#include"main.h"
/**
 * malloc_checked - allocate memory
 * @b: parameter
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
void *y;
if (b < 1)
{
exit(98);
}
y = malloc(b);
if (y == NULL)
{
exit(98);
}
return (y);
}
