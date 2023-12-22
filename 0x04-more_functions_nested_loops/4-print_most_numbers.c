#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2,4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	/*des*/
	int e;

	for (e = 48; e <= 57; e++)
	{
		if ((e != '2') && (e != '4'))
		{
			_putchar(e);
		}
	}
	_putchar('\n');
}
