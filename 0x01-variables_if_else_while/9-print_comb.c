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

	while (o <= 57)
	{
		putchar(o);

		if (o != 57)
		{
			putchar(',');
			putchar(' ');
		} o++;
	} putchar('\n');
	return (0);
}
