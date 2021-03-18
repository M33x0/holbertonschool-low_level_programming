#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
/*0-binary_to_uint.c*/
unsigned int binary_to_uint(const char *b);
/*1-print_binary.c*/
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
/*100-get_endianness.c*/
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);
#endif /* _HOLBERTON_H*/
