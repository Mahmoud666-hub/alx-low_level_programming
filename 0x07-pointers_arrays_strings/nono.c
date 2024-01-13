#include<stdio.h>
#include<string.h>

void main()
{
	char* s = "dokky trew";
	char* d = "trew";
	printf("%s\n", strstr(s, d));
}