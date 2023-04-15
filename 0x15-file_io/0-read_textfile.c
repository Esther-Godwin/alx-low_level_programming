#include "main.h"
/**
 * read_textfile - Reads text file and prints it to stdout
 * @filename: Name of the file to read
 * @letters: Number of letters to read and write to stdout
 *
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_num, write_num;
	char *buffer;

	if (!filename || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_num = read(fd, buffer, letters);
	close(fd);
	if (read_num <= 0)
	{
		free(buffer);
		return (0);
	}
	write_num = write(STDOUT_FILENO, buffer, read_num);
	free(buffer);
	if (write_num <= 0)
		return (0);
	return (write_num);
}
