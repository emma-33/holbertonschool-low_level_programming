#include "main.h"

/**
* read_textfile - reads a text file and prints it to stdout
* @filename: name of the file
* @letters: number of letters it should read and print
* Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;

	char *buf;

	buf = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDWR);

	if (o == -1)
		return (0);

	r = read(o, buf, letters);

	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);

	if (w == -1)
		return (0);

	close(o);
	free(buf);
	return (w);
}
