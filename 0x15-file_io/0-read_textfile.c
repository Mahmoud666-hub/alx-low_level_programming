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
	ssize_t y;
	char buf[letters];

	if (filename == NULL)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}
	y = read(x, buf, letters);
	if (y == -1)
	{
		return (0);
	}
	close(x);
	return (y);
}
