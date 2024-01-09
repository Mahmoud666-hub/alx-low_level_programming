#include"main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: parameter
 * @b: parameter
 * @s: pointer
 * Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}