#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - read the whole file and print to the std output
 * @filename: type char *
 * @letters: type size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, j;
	size_t i;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters);
	j = read(fd, buf, letters);
		if (j == (-1))
		{
			close(fd);
			free(buf);
			return (0);
		}

	for (i = 0; i <= letters && buf[i] != '\0'; i++)
	{
		j = write(STDOUT_FILENO, buf + i, 1);
			if (j == (-1))
			{
				close(fd);
				free(buf);
				return (0);
			}
	}
	free(buf);
	close(fd);
	return (i);
}


















