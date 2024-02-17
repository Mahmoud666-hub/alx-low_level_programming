#include"main.h"
/**
 * read_textfile - read text
 * @filename: parameter
 * @letters: parameter
 * Return: integer
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *p;
	char *x;
	ssize_t red;

	if (filename == NULL)
	{
		return (0);
	}

	p = fopen(filename, "r");
	if (p == NULL)
	{
		return (0);
	}

	x = (char *)malloc(letters);
	if (x == NULL)
	{
		fclose(p);
		return (0);
	}

	red = fread(x, sizeof(char), letters, p);

	fclose(p);

	if (red == 0 || write(STDOUT_FILENO, x, red) != red)
	{
		free(x);
		return (0);
	}

	free(x);

	return (red);
}
