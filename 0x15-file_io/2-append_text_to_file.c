#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: String to append
 *
 * Return: 1 on success, 0 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, write_count = 0;
	size_t str_len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (str_len = 0; text_content[str_len]; str_len++)
			;
		write_count = write(fd, text_content, str_len);
	}
	close(fd);
	if (write_count == -1)
		return (-1);
	return (1);
}
