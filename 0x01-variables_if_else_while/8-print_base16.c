#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*describe*/
	char s = 48;

	char b = 97;

	while (s <= 57)
	{
		putchar(s);
		s++;
	} while (b <= 102)
	{
		putchar(b);
		b++;
	} putchar('\n');
	return (0);


}
