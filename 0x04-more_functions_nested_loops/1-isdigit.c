#include "main.h"
/**
 * _isdigit- Check if the given character is a digit.
 * @c: digit to be tested
 *
 * Return: 1 if digit else 0 (False)
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
