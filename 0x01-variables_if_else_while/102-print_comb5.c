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
	/*for(m = 48; m <= 57; m++)*/
	for (e = 0; e < 99; e++)
	{
		for (r = (e + 1); r <= 99; r++)
		{
			putchar((e / 10) + 48);
			putchar((e % 10) + 48);
			putchar(' ');
			putchar((r / 10) + 48);
			putchar((r % 10) + 48);

			if ((e != 98) || (r != 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	} putchar('\n');
	return (0);
}
