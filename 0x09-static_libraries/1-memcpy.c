#include"main.h"
/**
 * _memcpy - copies memory area
 * @n: parameter
 * @dest: pointer
 * @src: pointer
 * Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
