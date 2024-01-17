#include"main.h"
#include<string.h>
/**
 * str_concat - concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{char *p;
int i = 0, y = 0, v = 0, w = 0;
if (s1 == NULL && s2 == NULL)
{
return (0);
}
else if (s1 != NULL && s2 != NULL)
{w = strlen(s1) + strlen(s2);
}
else if (s1 == NULL)
{w = strlen(s2);
}
else if (s2 == NULL)
{w = strlen(s1);
}
p = malloc((w + 1) * sizeof(char));
if (p == NULL)
{free(p);
exit(0);
}
if (s1 != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
{*(p + i) = *(s1 + i);
}
}
if (s2 != NULL)
{
for (v = i; s2[y] != '\0'; v++)
{*(p + v) = *(s2 + y);
y++;
}}
return (p);
}
