#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*describe*/
	int o = 48;

	while (o < 57)
	{
		putchar(o);
		putchar(',');
		putchar(' ');
		o++;
	}
	putchar(57);
	return (0);
}
