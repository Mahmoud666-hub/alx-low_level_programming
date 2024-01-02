#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s: parameter
 * Return: integer
 */
int _strlen(char *s)
{
	int x;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		x = i;
	}
	return (x);
}
