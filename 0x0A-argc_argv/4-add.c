#include"main.h"
/**
 * main - add numbers
 * @argc: parameter
 * @argv: parameter
 * Return: integer
*/
int main(int argc, char *argv[])
{
int i, m;
int x = 0;
int a = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
else
{
for (i = 1; i < argc; i++)
{
while (argv[i][a] != '\0')
{
if (argv[i][a] < 48 || argv[i][a] > 57)
{
printf("Error\n");
return (1);
}
else
a++;
}
m = atoi(argv[i]);
x = x + m;
}
}
printf("%d\n", x);
return (0);
}
