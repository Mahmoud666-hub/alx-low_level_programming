#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @w: analized string.
 * Return: String with all words capitalized.
 */
char *cap_string(char *w)
{
	int a, j;
	int x[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	a = 0;
	while (*(w + a) != '\0')
	{
		if (*(w + a) >= 'a' && *(w + a) <= 'z')
		{
			if (a == 0)
			{
				*(w + a) = *(w + a) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (x[j] == *(w + a - 1))
					{
						*(w + a) = *(w + a) - 32;
					}
				}
			}
		}
	a++;
	}
	return (w);
}
