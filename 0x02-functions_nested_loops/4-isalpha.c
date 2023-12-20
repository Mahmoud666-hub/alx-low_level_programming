#include "main.h"
/**
 * _isalpha - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _isalpha(int c)
{
	/*des*/

	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return (1);
	} return (0);
}
