#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 * Return:pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int e = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[e] != '\0')
	{
		e++;
	}
	int k = i + e;
	int x;
	int y = 0;

	for (x = i; x <= k; x++)
	{
		dest[x] = src[y];
		y++;
	}
	return (dest);
}
