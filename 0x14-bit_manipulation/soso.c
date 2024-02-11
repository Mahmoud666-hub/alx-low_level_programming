#include"main.h"
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int z = n, x;

    if (index < sizeof(unsigned long int) * 8)
    {
    if (z & 1L << index)
    {
        return (1);
    }
    else
    {
    return (0);
    }
    }
    return (-1);

}
