#include"main.h"
/**
 * clear_bit - clear certain bit
 * @n: parameter
 * @index: parameter
 * Return: innteger
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index < sizeof(unsigned long int) * 8)
	{
		x = 1 << index;
		x = ~x;
		*n = *n & x;
		return (1);
	}
	return (-1);
}
