#include "main.h"

/**
* main - Copies the content of a file into another file
* @argc: number of arguments
* @argv: agrument vector
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int from, to, r, close_f, close_t;

	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((r = read(from, buff, 1024)) > 0)
		if (to == -1 || (write(to, buff, r) != r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_f = close(from);
	close_t = close(to);
	if (close_f == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);

	if (close_t == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);

	exit(100);

	return (0);
}
