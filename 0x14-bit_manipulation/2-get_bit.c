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

	if (n == 0)
	{
		return (0);
	}
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else if (z & (1UL << index))
	{
		return (1);
	}
	else
	return (0);
}
