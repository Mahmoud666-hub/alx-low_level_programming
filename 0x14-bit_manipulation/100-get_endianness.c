#include"main.h"
/**
 * get_endianness - determie type of machine
 * Return: iteger
*/
int get_endianness(void)
{
	int x = 1;

	char *c = (char *)&x;/*لازم تعمل type casting*/

/*printf("%d\n", c[1]);*/
/*c[0] c[1] c[2] c[3] 1 0 0 0 big endian*/

	if (c[0] == 1)
	{

		return (0);
	}
	else
	return (1);
}
