#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*describe*/
	int d;
	int e;
	 for (d = 48; d < 57; d++)
	 {
		 for(e = d + 1; e <= 57; e++)
		 {
			 putchar(d);
			 putchar(e);
			 if ((e != 57) || (d != 56))
			 {
				 putchar(',');
				 putchar(' ');
			 }
		 }
	 } putchar('\n');
	 return (0);
}
