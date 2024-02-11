#include"main.h"
/**
 * get_bit - get certain number of bit
 * @n: parameter
 * @index: parameter
 * Return: integer
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int z = n;
	unsigned int i = 0, x = 0;
	char c[x];

	if (n == 0)
	{
		return (0);
	}
	while (z > 0)
	{
		z = z >> 1;
		i++;
	}
	z = n;
	while (i > 0)
	{
		i--;
		if (z & (1L << i))
		{
			/*_putchar('1');*/
			c[x] = '1';
		}
		else
		{
			/*_putchar('0');*/
			c[x] = '0';
		}
		x++;
	}
	printf("%d\n", x);
	printf("%d\n", index);
if (index >= x)
{
	return (-1);
}
else
return ('0' + c[index]);
}
