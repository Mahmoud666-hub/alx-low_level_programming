#include "main.h"
/**
 * print_sign - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @n: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int print_sign(int n)
{
	/*des*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} _putchar('0');
		return (0);
}
