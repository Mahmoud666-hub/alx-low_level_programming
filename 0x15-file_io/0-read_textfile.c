#include"main.h"
/**
 * read_textfile - read text
 * @filename: parameter
 * @letters: parameter
 * Return: integer
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	size_t y, z = 0;
	char buf[50];

	if (filename == NULL)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}
	while ((y = read(x, buf, sizeof(buf) - 1)) > 0)
	{
		buf[y] = '\0';
		write(STDOUT_FILENO, buf, y);
		letters -= y;
		if (letters <= 0)
		{
			break;
		}
		z += y;
	}
	close(x);
	return (z + 1);
}
