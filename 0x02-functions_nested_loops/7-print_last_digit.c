#include "main.h"
/**
 * print_last_digit - will print the last digit of a given number.
 * @n: Number used to find the last digit.
 *
 * Description: will print the last digit of a given number. If the
 * number is a negative the value will be return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int n)
{
	/*des*/
	if (n < 0)
	{
		n *= (-1);
	} n = n % 10;
	_putchar(n + 48);
	return (n);
}

