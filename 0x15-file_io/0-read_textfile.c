#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdouput.
 * @filename: the pointer to the string.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num, l_nums;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	num = read(fd, buffer, letters);
	if (num == -1)
		return (0);
	l_nums = write(STDOUT_FILENO, buffer, letters);
	if (l_nums == -1 || l_nums != num)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (l_nums);
}
