#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: String to write to the file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, write_num = 0;
	size_t string_len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (string_len = 0; text_content[string_len]; string_len++)
			;
		write_num = write(fd, text_content, string_len);
	}
	close(fd);
	if (write_num == -1)
		return (-1);
	return (1);
}
