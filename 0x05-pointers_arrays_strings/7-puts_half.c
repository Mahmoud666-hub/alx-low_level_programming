#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int q = 0;
	int i;

	while (q >= 0)
	{
		if (str[q] == '\0')
			break;
		q++;
	}

	if (q % 2 == 1)
		i = q / 2;
	else
		i = (q - 1) / 2;

	for (i = i + 1; i < q; i++)
		_putchar(str[i]);
	_putchar('\n');
}
