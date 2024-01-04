#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int r;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[w] != '\0')
	{
		w++;
	}
	r = i + w;

	for (x = i; x < r; x++)
	{
		if (y < n)
		{
			dest[x] = src[y];
			y++;
		}
	}
	return (dest);
}
