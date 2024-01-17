#include"main.h"
/**
 * main - gght juhy jhytr
 * @argc: parameter
 * @argv: parameter
 * Return:integer
*/
int main(int argc, char *argv[])
{ int i, y = 1, x = 0;
if (argc == 1)
{
printf("Error\n");
return (1);
}
else
i = atoi(argv[y]);
while (i >= 25)
{
i = i - 25;
x++;
}
while (i >= 10)
{
i = i - 10;
x++;
}
while (i >= 5)
{
i = i - 5;
x++;
}
while (i >= 2)
{
i = i - 2;
x++;
}
while (i >= 1)
{
i = i - 1;
x++;
}
printf("%d\n", x);
return (0);
}
