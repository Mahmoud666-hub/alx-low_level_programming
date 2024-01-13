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
int g = i + 1;
char *q = "NULL";

for (n = 0; haystack[n] != '\0';)
{
if (haystack[n] == needle[i])
{
for (x = n + 1; needle[i] != '\0';)
{
if (haystack[x] == needle[g])
{
if (needle[g + 1] == '\0')
{
return (haystack + n);
}
else
g++;
x++;
continue;
}
else
n++;
i = 0;
break;
}
}
else
n++;
i = 0;
}
return (q);
}
