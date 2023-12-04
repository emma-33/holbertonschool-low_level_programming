#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file
* @text_content: NULL terminated string to write to the file
* Return: 1 on sucess, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int o, w;

	int count = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}
		w = write(o, text_content, count);

		if (w == -1)
		{
			return (-1);
		}
	}
	close(o);
	return (1);
}
