#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or the appropriate error code
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, close_from, close_to;
	ssize_t read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (EXIT_FAILURE);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (EXIT_FAILURE);
	}
	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1 || read_count != write_count)
			break;
	}
	close_from = close(fd_from);
	close_to = close(fd_to);
	if (read_count == -1 || write_count == -1 || close_from == -1 ||
			close_to == -1)
	{
		if (close_from == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (close_to == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
