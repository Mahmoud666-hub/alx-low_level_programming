#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @q: analized string.
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *q)
{
	int m = 0;

	while (*(q + m) != '\0')
	{
		if (*(q + m) >= 'a' && *(q + m) <= 'z')
		{
			*(q + m) = *(q + m) - 32;
		}
		m++;
	}
	return (q);
}
