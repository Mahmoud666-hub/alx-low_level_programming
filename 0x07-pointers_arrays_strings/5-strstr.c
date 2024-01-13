#include"main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
int x = 0;
int n = 0;
int i = 0;
char *q = "nil";
while (needle[x] != '\0')
{
while (haystack[i] != '\0')
{
if (haystack[i] == needle[x])
{
break;
}
i++;
}
if (haystack[i] != needle[x])
{
return (q);
}
x++;
}
for (n = 0; haystack[n] != '\0'; n++)
{
if (haystack[n] == needle[0])
{
return (haystack + n);
}
}
return (q);
}
