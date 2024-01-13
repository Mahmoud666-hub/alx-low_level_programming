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
unsigned int count = 0;
while (s[m] != '\0')
{
for (i = 0; accept[i] != '\0';)
{
if (accept[i] == s[m])
{
count++;
break;
}
i++;
}
if (accept[i] != s[m])
{
return (count);
}
m++;
}
return (count);
}
