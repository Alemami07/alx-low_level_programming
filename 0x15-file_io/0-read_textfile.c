#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 *read_textfile - reads a text file and writes to stdout
 *@filename: file to read
 *@letters: number of bytes to read and write
 *Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	char *buffer;
	int rc;

	if (filename == NULL)
		return (0);
	rc = open(filename, O_RDONLY);

	if (rc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	rd = read(rc, buffer, letters);

	if (rd == -1)
	{
		free(buffer);
		close(rc);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr == -1)
	{
		free(buffer);
		close(rc);
		return (0);
	}
	close(rc);
	return (rd);

}
