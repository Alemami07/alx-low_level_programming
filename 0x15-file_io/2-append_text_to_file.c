#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 *append_text_to_file - appends text to file
 *@filename: name of file
 *@text_content: text tond to file
 *Return: on success, 1. on failure, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int sh, app, len;

	len = 0;

	if (!filename)
		return (-1);

	sh = open(filename, O_RDWR | O_APPEND);

	if (sh == -1)
		return (-1);

	if (!text_content)
	{
		close(sh);
		return (-1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}

	app = write(sh, text_content, len);
	if (app != len || app == -1)
	{
		close(sh);
		return (-1);
	}
	close(sh);
	return (1);
}
