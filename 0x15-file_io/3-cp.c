#include "main.h"
#include <stdio.h>

/**
 * _close - closes a file
 * @fd: file to close
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * cp - copies a file content to another file
 * @src_fd: source file
 * @target_fd: target file
 * @target: target file name
 */
void cp(ssize_t src_fd, ssize_t target_fd, char *target)
{
	ssize_t count;
	char *buffer[1024];

	count = read(src_fd, buffer, 1024);
	while (count != 0)
	{
		if (count == -1)
		{
			_close(src_fd);
			_close(target_fd);
			exit(98);
		}
		count = write(target_fd, buffer, count);
		if (count == -1)
		{
			_close(src_fd);
			_close(target_fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
			exit(99);
		}
		count = read(src_fd, buffer, 1024);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Source and target filenames
 *
 * Return: Status code
 */
int main(int argc, char *argv[])
{
	ssize_t src_fd, target_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	target_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (target_fd == -1)
	{
		_close(src_fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cp(src_fd, target_fd, argv[2]);
	_close(src_fd);
	_close(target_fd);
	return (0);
}
