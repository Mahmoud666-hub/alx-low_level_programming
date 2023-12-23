#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *
 * @n: - intiger parameter
 * Return - void
 */
void print_diagonal(int n)
{
	/*des*/
	if (n > 0)
	{
		int x;

		for (x = 0; x < n; x++)
		{
			int y;

			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
