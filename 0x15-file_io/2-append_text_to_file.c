#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - create a file and write in text content
 * @filename: the file to be opened or create
 * @text_content: char *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0, j = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
			return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i])
	{
		i++;
	}
	if (i == 0)
		return (1);
	j = write(fd, text_content, i);
		if (j == -1)
			return (-1);

	close(fd);
	return (1);
}
