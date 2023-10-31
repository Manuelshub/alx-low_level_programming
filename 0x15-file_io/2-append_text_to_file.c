#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: the name of the file.
 * @text_content: string to be added at the end of the file.
 * Return: 1 if successful, -1 if otherwise.
 *
 * Description: Return 1 if the file exist and -1 if the file does
 *not exist or you do not have the required permission to write
 *the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t num;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
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
	if (num == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
