#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*dexcribe*/
	int e;
	int r;
	int m;
	int n;

	for ((m = 48), (n = 48); (n <= 57); n++, m++)
	{
		for (e = 48; e <= 57; e++)
		{
			for (r = 48; r <= 57; r++)
			{
				if ((e != m) || (r != n) || (m != r) || (n != e))
				{
					putchar(m);
					putchar(n);
					putchar(' ');
					putchar(e);
					putchar(r);
					if ((m + n + r + e) != (57 + 57 + 57 + 56))
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
