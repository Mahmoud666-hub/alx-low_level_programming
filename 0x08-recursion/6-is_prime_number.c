#include"main.h"
/**
 * shit - detect prime number
 * @n: parameter
 * @b: parameter
 * Return: integer
*/
int shit(int n, int b)
{
if (n == 2)
{
return (1);
}
else
if (n <= 1)
{
return (0);
}
else
if (b == (n - 1))
{
return (1);
}
else
if (n % b == 0)
{
return (0);
}
else
return (shit(n, b + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: parameter
 * Return: integer
*/
int is_prime_number(int n)
{
int k;
int b = 2;
k = shit(n, b);
return (k);
}
