#include"variadic_functions.h"
/**
 * sum_them_all - function sum integers
 * @n: parameter
 * Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int x, sum = 0;
va_list arg;
if (n == 0)
{
return (0);
}
va_start(arg, n);
for (i = 0; i < n; i++)
{
x = va_arg(arg, int);
sum += x;
}
va_end(arg);
return (sum);
}
