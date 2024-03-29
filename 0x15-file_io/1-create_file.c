#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - create a file and write in text content
 * @filename: the file to be opened or create
 * @text_content: char *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0, j = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
	j = write(fd, text_content, i);
		if (j == -1)
			return (0);

	close(fd);
	return (1);
}
