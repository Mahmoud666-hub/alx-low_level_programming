#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int r = 0;

	while (r >= 0)
	{
		if (str[r] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (r % 2 == 0)
			_putchar(str[r]);
		r++;
	}
}
