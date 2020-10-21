
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*0-print_name.c*/
void print_name(char *, void (*)(char *));

/*1-array_iterator.c*/
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* FUNCTION_POINTERS_H */