#include "main.h"
/**
 * main - copies content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int wr, rd, fd1, fd2;
	char *buff[1024];

	if (argc !=  3)
		err(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
		if (fd2 == -1)
			err(99, argv[2], 0);

	fd1 = open(argv[1], O_RDONLY);
		if (fd1 == -1)
			err(98, argv[1], 0);
	while ((rd = read(fd1, buff, 1024) != 0))
	{
		if (rd == -1)
		err(98, argv[1], 0);

		wr = write(fd2, buff, rd);
		if (wr == -1)
		err(99, argv[2], 0);
	}
	close(fd1) == -1 ? (err(100, NULL, fd1)) : close(fd1);
	close(fd2) == -1 ? (err(100, NULL, fd2)) : close(fd2);

	return (0);
}
/**
 * err - handles errors in main function
 *@error: error code
 *@file: first arg
 *@fd: file descriptor
 *Return: an int
 */
int err(int error, char *file, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);

		case 98:
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file);
			exit(error);

		case 99:
			dprintf(STDERR_FILENO, "Error: can't write to file %s\n", file);
			exit(error);

		case 100:
			dprintf(STDERR_FILENO, "Error: can't close fd %d", fd);
			exit(error);

		default:
			return (0);
	}
}
