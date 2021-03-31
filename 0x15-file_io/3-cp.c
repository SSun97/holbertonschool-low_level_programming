#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - copy file from to
 * @ac: number of arguments
 * @av: pointer to the arguments
 * Return: 0.
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to, i = 1, j = 1;
	char buf[1024] = {'\0'};

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
		if (fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	fd_from = open(av[1], O_RDONLY);
		if (fd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
	while (i)
	{
		i = read(fd_from, buf, 1024);
		j = write(fd_to, buf, 1024);
		if (i == -1 || j == -1)
			break;
	}
	i = close(fd_from);
	j = close(fd_to);
		if (i == -1 || j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
			exit(100);
		}

	return (0);
}
