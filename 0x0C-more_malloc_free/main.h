#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

int _putchar(char c);

int *array_range(int min, int max);
#endif
