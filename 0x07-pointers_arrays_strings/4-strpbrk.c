#include"main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int m = 0;
char *d = "NULL";
while (s[m] != '\0')
{
for (i = 0; accept[i] != '\0';)
{
if (accept[i] == s[m])
{
return (s + m);
}
i++;
}
m++;
}
return (d);
}
