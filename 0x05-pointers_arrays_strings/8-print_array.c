#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int e = 0;

	for (; e < n; e++)
	{
		printf("%d", *(a + e));
		if (e != (n - 1))
			printf(", ");
	}
	printf("\n");
}
