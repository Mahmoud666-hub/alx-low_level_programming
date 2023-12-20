#include "main.h"
/**
 * print_alphabet_x10- Entry point
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	/*des*/
	int x;
	char a;

	for (x = 0; x < 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		} _putchar('\n');
	}
}
