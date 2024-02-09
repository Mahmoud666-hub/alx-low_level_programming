#include"main.h"
/**
 * binary_to_uint - convert binary to integer
 * @b: parameter
 * Return: unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{int i = 0, bin = 1, rel = 0;
if (b == NULL)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}
i--;
/*printf("%d\n", i);*/

while (i >= 0)
{
if (b[i] == '1')
{
rel = rel + bin;
}

/*rel = rel + (b[i] - 48) * bin;*/
bin *= 2;
i--;
}
return (rel);
}
