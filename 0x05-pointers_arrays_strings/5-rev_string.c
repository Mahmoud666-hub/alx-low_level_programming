#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int z = 0;
	int x, t;
	char *str;
	char temp;

	while (z >= 0)
	{
		if (s[z] == '\0')
			break;
		z++;
	}
	str = s;

	for (x = 0; x < (z - 1); x++)
	{
		for (t = x + 1; t > 0; t--)
		{
			temp = *(str + t);
			*(str + t) = *(str + (t - 1));
			*(str + (t - 1)) = temp;
		}
	}
}
