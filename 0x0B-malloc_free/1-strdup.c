#include"main.h"
/**
 * _strdup - copy string
 * @str: parameter
 * Return: pointer
*/
char *_strdup(char *str)
{
char *p;
int i = 0;
if (str == NULL)
{
return ('\0');
}
else
while (str[i] != '\0')
{
i++;
}
p = malloc(i *sizeof(char));
if (p == NULL)
{
free(p);
exit(0);
}
else
p = str;
return (p);
}
