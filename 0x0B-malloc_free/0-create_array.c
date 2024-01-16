#include"main.h"
/**
 * create_array - creates an array of chars
 * @size: parmeter
 * @c: parameter
 * Return: pointer
*/
char *create_array(unsigned int size, char c)
{ unsigned int i;
char *p = malloc(size * sizeof(char));
if (size == 0)
{
return ('\0');
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
if (p == 0)
{
free(p);
return ('\0');
}
return (p);
}
