#include"main.h"
/**
 * _strchr - locates a character in a string
 * @c: parameter
 * @s: pointer
 * Return: pointer
*/
char *_strchr(char *s, char c)
{
char *p = {0};
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
s = (s + i);
p = s;
}
i++;
}
return (p);
}
