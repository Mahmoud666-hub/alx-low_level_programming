#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: - parameter integer.
 * Return: void
 */
void print_triangle(int size)
{
	/*des*/
	if (size > 0)
	{
		int x, b, a, m;

		m = (size - 1);

		for (x = 0; x < size; x++)
		{
			b = 0;
			while (b < m)
			{
				_putchar(' ');
				b++;
			}
			for (a = 0; a <= x; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
			m--;
		}
	}
	else
		_putchar('\n');
}
