#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int e = 0;
	int x = 0;
	int m;

	for (x = 0; x < n && src[e] != '\0'; x++)
	{
		dest[x] = src[e];
		e++;
	}

	for (m = x; m < n; m++)
	{
		dest[m] = '\0';
	}
	return (dest);
}
