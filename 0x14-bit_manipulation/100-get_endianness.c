#include"main.h"
/**
 * get_endianness - determie type of machine
 * Return: iteger
*/
int get_endianness(void)
{
	int x = 1;

	char *c = (char *)&x;/*لازم تعمل type casting*/

	if (c[0] == '1')
	{
		return (1);
	}
	else
	return (0);
}
