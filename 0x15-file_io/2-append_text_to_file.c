#include"main.h"
/**
 * append_text_to_file - append to text
 * @filename: parameter
 * @text_content: parameter
 * Return: integer
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *p;

	if (filename == NULL || (filename == NULL && text_content == NULL))
	{
		return (-1);
	}
	p = fopen(filename, "a");
	if (p == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fclose(p);
		return (1);
	}
	fputs(text_content, filename);
	fclose(p);
	return (1);
}
