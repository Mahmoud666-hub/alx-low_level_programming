#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - count the natural numbers from n to 98.
 * @n: value to count from.
 *
 */
void print_to_98(int n)
{
	/*des*/
	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		int x;

		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		int y;

		for (y = n; y >= 98; y--)
		{
			printf("%d", y);
			if (y != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
