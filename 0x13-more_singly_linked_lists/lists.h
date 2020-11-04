#ifndef _LISTS_H
#define _LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
/*0-print_listint.c*/
size_t print_listint(const listint_t *h);
/*1-listint_len.c*/
size_t listint_len(const listint_t *h);
/*2-add_nodeint.c*/
listint_t *add_nodeint(listint_t **head, const int n);
/*3-add_nodeint_end.c*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*4-free_listint.c*/
void free_listint(listint_t *head);
/*5-free_listint2.c*/
void free_listint2(listint_t **head);
#endif /*_LISTS_H*/
