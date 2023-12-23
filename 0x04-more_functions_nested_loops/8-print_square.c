#include "main.h"
/**
 * print_square - prints a square.
 *
 * @size: - parameter integer
 * Return: void
 */
void print_square(int size)
{
	/*des*/
	if (size > 0)
	{
		int x;

		for (x = 0; x < size; x++)
		{
			int y;

			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
