#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * return - void
 */
void times_table(void)
{
	/*des*/
	int x, y, z, m, n;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			m = ((z / 10) + 48);
			n = ((z % 10) + 48);
			if (m == 48)
			{
				_putchar(' ');
			}
			if (m != 48)
			{
				_putchar(m);
			}
			_putchar(n);
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}

}
