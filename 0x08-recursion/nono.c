#include"main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter
 * Return: integer
*/
#include"main.h"
int test(int x, int d);

int _sqrt_recursion(int n)
{
    int d = 0;
    d++;
    int m = test(n,d);
    return (m);
}
int test(int x, int d)
{
    if (x < 0)
    {
        return (-1);
    }
    
    if (d * d == x)
    {
        return d;
    }
    else
    {
       if (d != x)
       {
        test(x, d+1);
       }
       else
       {
        return (-1);
       }
        
    }
        
}