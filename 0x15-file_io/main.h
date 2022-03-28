#ifndef FILE_H 
#define FILE_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
