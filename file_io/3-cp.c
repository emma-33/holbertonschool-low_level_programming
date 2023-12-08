#include "main.h"

/**
* close_file - closes files
* @file: file to be closed
*/
void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
* main - Copies the content of a file into another file
* @argc: number of arguments
* @argv: agrument vector
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (r > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(from, buffer, 1024);
	}
	close_file(from);
	close_file(to);

	return (0);
}
