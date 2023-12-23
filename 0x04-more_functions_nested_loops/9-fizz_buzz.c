#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/*des*/
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (((x % 3) == 0) && ((x % 5) != 0))
		{
			printf("Fizz");
			printf(" ");
		}
		else if (((x % 5) == 0) && ((x % 3) != 0))
		{
			printf("Buzz");
			if (x != 100)
			{
				printf(" ");
			}
		}
		else if (((x % 3) == 0) && (((x % 5) == 0)))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", x);
			printf(" ");
		}
	}
	printf("\n");
}
