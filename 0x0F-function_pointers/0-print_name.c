#include"function_pointers.h"
/**
 * print_name - print name
 * @name: parameter
 * @f:parameter
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
exit(0);
}
f(name);
}
