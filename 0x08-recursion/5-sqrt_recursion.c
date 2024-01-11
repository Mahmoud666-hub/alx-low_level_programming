#include"main.h"
/**
 * troy - returns result of square root to other
 * @n: parameter
 * @b: parameter
 * Return: integer
*/
int troy(int n, int b)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n == b * b)
{
return (b);
}
else
{
if (n == b)
{
return (-1);
}
return (troy(n, b + 1));
}
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: parameter
 * Return: integer
*/
int _sqrt_recursion(int n)
{
int m;
int b = 0;
b++;
m = troy(n, b);
return (m);
}
