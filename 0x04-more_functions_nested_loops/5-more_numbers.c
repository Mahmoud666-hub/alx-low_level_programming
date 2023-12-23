#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{
	/*des*/
	int a;

	for (a = 0; a < 10; a++)
	{
		int b;

		for (b = 0; b <= 14; b++)
		{
			int m, n;

			m = ((b / 10) + 48);
			n = ((b % 10) + 48);
			if (m != 48)
			{
				_putchar(m);
			}
			_putchar(n);
		}
		_putchar('\n');
	}
}
