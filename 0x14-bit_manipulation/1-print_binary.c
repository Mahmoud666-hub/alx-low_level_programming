#include"main.h"
/**
 * print_binary - decimal to binary
 * @n: parameter
*/
void print_binary(unsigned long int n)
{
unsigned long int z = n;
int i = 0;
while (z > 0)
{
z >>= 1;
i++;
}
z = n;
while (i > 0)
{
i--;
/*printf("%d\n", i);*/
if (z & (1 << i))
{
_putchar('1');
}
else
{
_putchar('0');
}
}
}
