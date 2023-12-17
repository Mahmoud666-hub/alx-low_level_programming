#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*describe*/

	int e = 48;
	int w = (e + 1);

	while (e < 57)
	{
		for (w = (e + 1); w <= 57; w++)
		{
			putchar(e);
			putchar(w);

			if ((e != 56) || (w != 57))
			{
				putchar(',');
				putchar(' ');
			}
		} e++;
	} putchar('\n');
	return (0);
}
