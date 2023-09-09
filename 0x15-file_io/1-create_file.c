#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 *create_file - create file
 *@filename: file to create
 *@text_content: content of file
 *Return: 1 (success) -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int sh, wr, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}

	sh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (sh == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(sh);
		return (-1);
	}

	wr = write(sh, text_content, len);
	if (wr == -1 || wr != len)
	{
		close(sh);
		return (-1);
	}
	close(sh);
	return (1);

}
