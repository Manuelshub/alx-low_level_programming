#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: content to write to the file.
 * Return: 1 on success, -1 on failure.
 *
 * Description: if the file already exist, truncate it.
 */
int create_file(const char *filename, char *text_content)
{
	int len, fd;
	ssize_t num;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	num = write(fd, text_content, len);
	close(fd);
	if (num == -1)
		return (-1);
	return (1);
}
