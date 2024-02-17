#include"main.h"
/**
 * read_textfile - read text
 * @filename: parameter
 * @letters: parameter
 * Return: integer
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *p = NULL;
	char *x = NULL;
	int a = 0;

	if (filename == NULL)
	{
		return (0);
	}
	p = fopen(filename, "r");
	if (p == NULL)
	{
		return (0);
	}
	x = malloc(letters);
	if (x == NULL)
	{
		free(x);
		fclose(p);
		return (0);
	}
	a = fread(x, sizeof(char), letters, p);
	if (a < 0)
	{
		free(x);
		fclose(p);
		return (0);
	}
	write(1, x, letters);
	free(x);
	fclose(p);
	return (a + 1);

}
