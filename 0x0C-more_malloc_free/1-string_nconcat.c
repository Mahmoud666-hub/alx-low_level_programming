#include"main.h"
/**
 * string_nconcat - concetnates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{unsigned int x, y;
char *p;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
p = malloc(strlen(s1) + n + 1);
if (p == NULL)
{
exit(0);
}
for (x = 0; x < strlen(s1); x++)
{
p[x] = s1[x];
}
for (y = 0; y < n && p[y] != '\0';)
{
p[x] = s2[y];
y++;
x++;
}
p[x] = '\0';
return (p);
}
