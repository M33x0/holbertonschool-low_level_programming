#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

/*0-create_array.c*/
char *create_array(unsigned int size, char c);

/*1-strdup*/
char *_strdup(char *str);

/*2-str_concat.c*/
char *str_concat(char *s1, char *s2);

/*3-alloc_grid*/
int **alloc_grid(int width, int height);

/*4-free_grid.c*/
void free_grid(int **grid, int height);
#endif