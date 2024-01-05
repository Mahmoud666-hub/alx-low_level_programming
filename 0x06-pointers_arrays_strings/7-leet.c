#include "main.h"
/**
 * leet - change vowels to numbers.
 * @v: analized string.
 * Return: String with all vowels changed.
 */
char *leet(char *v)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(v + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(v + i) == a[j])
			{
				*(v + i) = n[j];
			}
		}
		i++;
	}
	return (v);
}
