#ifndef __SORT_H_
#define __SORT_H_

#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int*, size_t);

#endif
