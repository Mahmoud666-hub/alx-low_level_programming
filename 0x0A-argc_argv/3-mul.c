#include<stdio.h>
#include"main.h"
/**
 * main - print multi of two argument
 * @argc: parameter
 * @argv: parameter
 * Return: integer
*/
int main(int argc, char *argv[])
{
int x, y;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", (x *y));
return (0);
}
