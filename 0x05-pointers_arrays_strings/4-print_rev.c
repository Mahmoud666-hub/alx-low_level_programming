#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int m = 0;

	while (m >= 0)
	{
		if (s[m] == '\0')
			break;
		m++;
	}

	for (m = m - 1; m >= 0; m--)
		_putchar(s[m]);
	_putchar('\n');
}
