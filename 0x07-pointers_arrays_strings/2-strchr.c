#include"main.h"
/**
 * _strchr - locates a character in a string
 * @c: parameter
 * @s: pointer
 * Return: pointer
*/
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
s = (s + i);
return (s + i);
}
i++;
}
if (c == '\0')
{
return (s + i);
}
return (0);
}
