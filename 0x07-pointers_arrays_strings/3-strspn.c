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
while (s[i] != '\0')
{
if (s[i] == accept[0])
{
return (i + 1);
}
i++;
}
return (0);
}
