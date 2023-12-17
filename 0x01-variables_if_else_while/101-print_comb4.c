#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*describe*/
	int q = 48;
	int w = (q + 1);
	int e = (q + 2);

	for (q = 48; q < 56; q++)
	{
		for (w = (q + 1); w < 57; w++)
		{
			for (e = (q + 2); e <= 57; e++)
			{
				if ((q < w) && (w < e))
				{
					putchar(q);
					putchar(w);
					putchar(e);
					if ((q != 55) || (w != 56) || (e != 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	} putchar('\n');
	return (0);
}
