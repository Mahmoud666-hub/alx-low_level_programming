#include"main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer
 * Return: integer
*/
int _strlen_recursion(char *s)
{
    if (s[i] == '\0')
    {
        return (i);
    }
    else
    {
        s++;
        i = i + _strlen_recursion(s);
    }
    
}