#include <stdio.h>
/**
*main- prints the largest prime factor
*of x
*
*Return: (0) for success
*/
int main(void)
{
	long x = 612852475143;
	int y;
	
	while (y < x / 2)
	{
		if (x % y == 0)
		{
			x = x / 2;
			continue;
		}
		for (y = 3; y < x / 2; y = y + 2)
		{
			if (x % y == 0)
				x = x / y;
		}
		y++;
	}
	printf("%ld\n", x);
	return (0);
}
