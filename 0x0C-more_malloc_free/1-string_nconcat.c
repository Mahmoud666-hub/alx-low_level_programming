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
char *p, *c;
x = strlen(s1);
y = strlen(s2);
p = malloc(1);
if (s1 == NULL && s2 == NULL)
{
return (p);
}
else if (s2 == NULL)
{y = 0;
}
else if (s1 == NULL)
{x = 0;
}
if (n >= y)
{c = malloc((x + y) *sizeof(char) + 1);
if (c == NULL)
{exit(0);
}
}
else
c = malloc((x + (y - n)) * sizeof(char) + 1);
if (c == NULL)
{
exit(0);
}
for (x = 0; s1[x] != '\0'; x++)
{
c[x] = s1[x];
}
for (y = 0; s2[y] < s2[n] && s2[y] != '\0'; y++)
{c[x] = s2[y];
x++;
}
c[x] = '\0';
return (c);
}
