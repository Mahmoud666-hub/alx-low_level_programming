#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int m;

	for (x = 0; s1[x] != '\0'; x++)
	{
		if (s1[x] == s2[x])
		{
			m = 0;
		} else
		{
			m = s1[x] - s2[x];
			break;
		}
	}
	return (m);

}
