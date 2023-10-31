#include "main.h"

/**
 * error_message - print error message.
 * @fd: the number to be considered
 */
void error_message(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file into another.
 * @ac: argument count.
 * @av: Argument vector.
 * Return: 0.
 */
int main(int ac, char **av)
{
	int source_fd, des_fd, num;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_fd = open(av[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	des_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (des_fd == -1)
	{
		dprintf(2, "Error: Can't read to file %s\n", av[2]);
		exit(98);
	}
	while ((num = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(des_fd, buffer, num) != num)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		if (num < 0)
		{
			dprintf(2, "Error: can't read into buffer\n");
			exit(98);
		}
	}
	error_message(source_fd);
	error_message(des_fd);
	return (0);
}
