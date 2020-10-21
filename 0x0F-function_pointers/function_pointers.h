
#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/*0-print_name.c*/
void print_name(char *, void (*)(char *));

/*1-array_iterator.c*/
void array_iterator(int *array, size_t size, void (*action)(int));

/*2-int_index.c*/
int int_index(int *array, int size, int (*cmp)(int));
#endif /* FUNCTION_POINTERS_H */
