#include"main.h"
/**
 * main - copy files
 * @argc: parameter
 * @argv: parameter
 * Return: integer
*/
int main(int argc, char **argv)
{
	FILE *x;
	int y;
	char c;

	if (argc != 3)
	{dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	x = fopen(argv[1], "r");
	if (x == NULL)
	{dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}


	y = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (y == -1)
	{dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}

	while ((c = fgetc(x)) != EOF)
	{
		write(y, &c, 1);
	}


	if (close(y) == -1 || fclose(x) == -1)
	{dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
