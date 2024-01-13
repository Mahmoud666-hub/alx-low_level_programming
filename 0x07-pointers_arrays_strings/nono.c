#include<stdio.h>
#include<string.h>
char *s;
void main()
{
	char *haystack = "First, solve the problem. Then, write the code.";
	char *needle = "solve";
int x = 0;
int n = 0;
int i = 0;
int g = i + 1;

char *q = "nil";

for (n = 0; haystack[n] != '\0';)
{
if (haystack[n] == needle[i])
{
    for ( x = n + 1; needle[i] != '\0';)
    {
        if (haystack[x] == needle[g])
        {
			if (needle[g + 1] == '\0')
			{
				return(haystack + n);
			}else
			g++;
			x++;
        }
		else
		n++;
		i = 0;
		break;
    }


}else
n++;
i = 0;
}

