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
	size_t y = 0;
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
	while (y <= letters)
	{
	y = read(x, buf, 5);
	if (y > 0)
	{
		close(x);
		return (0);
	}
	}
	close(x);
	return (y);
}
