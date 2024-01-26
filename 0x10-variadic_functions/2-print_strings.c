#include"variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: parameter
 * @n: parameter
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list so;
va_start(so, n);
for (i = 0; i < n; i++)
{
char *wo = va_arg(so, char *);
if (wo == NULL)
{
printf("(nil)");
}
else
printf("%s", wo);
if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(so);
}
