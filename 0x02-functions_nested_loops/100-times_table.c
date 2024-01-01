#include "main.h"
/**
 *print_times_table - prints the n times table.
 * @n: - integer parameter.
 * Return: void
 */
void print_times_table(int n)
{
	int i = n, x, y, l, z, m, s, k;

	if (n > 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				l = ((z / 100) + 48);
				k = z % 100;
				m = ((k / 10) + 48), s = ((k % 10) + 48);
				if (y != 0)
				{
					_putchar(' ');
					if (l == 48)
					{
						_putchar(' ');
					}
					if (m == 48)
					{
						_putchar(' ');
					}
				}
				if (l != 48)
				{
					_putchar(l);
				}
				if (m != 48)
				{
					_putchar(m);
				} _putchar(s);
				if (y != i)
				{
					_putchar(',');
				}
			} _putchar('\n');
		}
	}
}
