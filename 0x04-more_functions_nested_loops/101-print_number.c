#include "main.h"
/**
 * print_number - prints an integer.
 * @n: - parameter integer.
 * Return: void
 */
void print_number(int n)
{
	/*des*/
	unsigned int i = n;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48);
}
