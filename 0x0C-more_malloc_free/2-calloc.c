#include"main.h"
/**
 * _calloc - array form
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{unsigned int i = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
void *p;
p = malloc(nmemb * size);
if (p == NULL)
{
exit(0);
}
memset(p, 0, nmemb * size);
return (p);
}
