#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
/*0-read_textfile.c*/
ssize_t read_textfile(const char *filename, size_t letters);
/*1-create_file.c*/
int create_file(const char *filename, char *text_content);
/*2-append_text_to_file.c*/
int append_text_to_file(const char *filename, char *text_content);
#endif /*_HOLBERTON_H*/
