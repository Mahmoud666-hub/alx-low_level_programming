#include"main.h"
/**
 * flip_bits - no. of different bits
 * @n: parameter
 * @m: parameter
 * Return: integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;
	unsigned int x = 0, i = 0;

	while (m > 0 || n > 0)
	{
		a = n >> 1;
		b = m >> 1;
		if ((a * 2 == n) == (b * 2 == m))
		{
			i++;
		}
		else
		{
			x++;
		}
		n = a;
		m = b;
	}
return (x);
}
