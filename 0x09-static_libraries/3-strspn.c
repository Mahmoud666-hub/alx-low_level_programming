#include"main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int m = 0;
while (accept[i] != '\0')
{
while (s[m] != '\0')
{
if (s[m] == accept[i])
{
return (m + 1);
} i++;
}
i = 0;
m++;
}
return (0);
}
