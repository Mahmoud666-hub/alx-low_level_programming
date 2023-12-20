#include "main.h"
/**
 * jack_bauer - print every minute of the day, starting from 00:00 - 23:59.
 *
 * Return : void
 */
void jack_bauer(void)
{
	/*time*/
	int hours;
	int min;

	for (hours = 0; (hours) < 24; hours++)
	{
		for (min = 0; (min) < 60; min++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
