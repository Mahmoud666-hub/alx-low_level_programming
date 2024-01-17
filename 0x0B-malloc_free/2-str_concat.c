#include"main.h"
/**
 * str_concat - concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{char *p;
int i = 0, y = 0, e = 0, w = 0;
if (s1 == NULL && s2 == NULL)
{
return ('\0');
}
while (s1[i] != '\0')
{
if (s1 == NULL)
{i = 0;
break;
}
else
i++;
}
while (s2[e] != '\0')
{
if (s2 == NULL)
{e = 0;
break;
}
else
e++;
}
w = i + e;
p = malloc((w + 1) * sizeof(char));
if (p == NULL)
{free(p);
exit(0);
}
for (i = 0; s1[i] != '\0'; i++)
{*(p + i) = *(s1 + i);
}
for (y = 0; s2[y] != '\0'; y++)
{*(p + i) = *(s2 + y);
i++;
}
return (p);
}
