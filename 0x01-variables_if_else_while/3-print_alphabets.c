#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
/*describe*/
{
	char h = 'a';
	char g = 'A';

	while (h <= 'z')
	{
		putchar(h);
		h++;
	}
	while (g <= 'Z')
	{
		putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
