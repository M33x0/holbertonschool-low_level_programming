#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int _putchar(char c);
/*0-read_textfile.c*/
ssize_t read_textfile(const char *filename, size_t letters);
#endif /*_HOLBERTON_H*/
