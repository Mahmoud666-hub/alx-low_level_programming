#include"main.h"
/**
 * print_binary - decimal to binary
 * @n: parameter
*/
void print_binary(unsigned long int n)
{
unsigned long int z = n;
int i = 0;
if (n == 0)
{
_putchar('0');
return;
}

while (z > 0)
{
z >>= 1;
i++;
}

z = n;

while (i > 0)
{
i--;

if (z & (1UL << i)) /*1L يعني LONG و ده معلومه جديد*/
{
_putchar('1');
}
else
_putchar('0');
}
}
