#include"main.h"
/**
 * _realloc - reallocate space
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
ptr = malloc(old_size);
if (ptr == NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL && new_size != 0)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size < old_size)
{
free(ptr);
return (NULL);
}
ptr = malloc(new_size);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
