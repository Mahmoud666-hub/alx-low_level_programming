#include"main.h"
/**
 * _realloc - reallocate space
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{void *p;
ptr = malloc(old_size);
if (ptr == NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL && new_size != 0)
{
ptr = malloc(new_size);
return (ptr);
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
p = malloc(new_size);
if (p == NULL)
{
free(p);
return (NULL);
}
return (p);
}
