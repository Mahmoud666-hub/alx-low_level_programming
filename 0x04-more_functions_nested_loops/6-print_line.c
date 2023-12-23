#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: - integer parameter
 * Return: void
 */
void print_line(int n)
{
	/*des*/
	if (n > 0)
	{
		int d;

		for (d = 0; d <= n; d++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
