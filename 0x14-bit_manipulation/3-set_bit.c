#include"main.h"
/**
 * set_bit - change a certain bit value
 * @n: parameter
 * @index: parameter
 * Return: integer
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index < sizeof(unsigned long int) * 8)
	{
		x = 1 << index;
		*n = *n | x;
		return (1);
	}
	return (-1);
}
