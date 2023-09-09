#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int err(int error, char *file, int fd);
#endif
