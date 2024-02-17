#include"main.h"
/**
 * create_file - create file
 * @filename: parameter
 * @text_content: parameter
 * Return: integer
*/
int create_file(const char *filename, char *text_content)
{
	int x = 0, y;

	if (filename == NULL)
	{
		return (-1);
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (x == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(x);
		return (1);
	}
	y = write(x, text_content, strlen(text_content));
	if (y == -1)
	{
		close(x);
		return (-1);
	}
	close(x);
	return (1);
}
