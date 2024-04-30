#include "sort.h"

/**
 * insertion_sort_list - sorting a list
 *
 * @list: (object), the list to use
 * Description: This function sort a double linked
 * list with the insertion method
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmpnode = NULL, *cmpnode = NULL, *prev = NULL, *next = NULL;

/*End the function is the list is NULL*/
	if (!list)
		return;

	tmpnode = *list;
	while (tmpnode != NULL)
	{
		cmpnode = *list;
		while (cmpnode != tmpnode)
		{
			if (tmpnode->n < cmpnode->n)
			{
				printf("BREAK A : %d/ B : %d\n", tmpnode->n, cmpnode->n);
				prev = tmpnode->prev;
				next = tmpnode->next;

				if (tmpnode != cmpnode->next)
					tmpnode->next = cmpnode->next;
				else
					tmpnode->next = cmpnode;
				tmpnode->prev = cmpnode->prev;

				if (prev == cmpnode)
					cmpnode->prev = prev;
				else
					cmpnode->prev = tmpnode;
				cmpnode->next = next;

				tmpnode = cmpnode;
				print_list(*list);
				break;
			}

			cmpnode = cmpnode->next;
		}
		tmpnode = tmpnode->next;
	}

}
