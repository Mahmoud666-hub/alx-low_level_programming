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
char *p = {'\0'};
while (s[i] != '\0')
{
if (s[i] == c)
{
s = (s + i);
p = s;
break;
}
else if (c == '\0')
{
p = '\0';
}

i++;
}
return (p);
}
