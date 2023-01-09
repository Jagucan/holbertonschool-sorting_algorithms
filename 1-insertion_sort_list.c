#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending.
 * @list: Is the pointer to the first node.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	listint_t *aux;

	if (!list)
		return;

	node = *list;
	while (node->next)
	{
		while (node->next)
		{
			while (node->n > node->next->n)
			{
				aux = node;

				while (node->prev)
					node->prev->next = aux->next;

				node->next->prev = aux->prev;
				node->prev = aux->next;
				node->next = aux->next->next;
				node->prev->next = aux;

				while (node->next)
					node->next->prev = aux;

				if (!node->prev->prev)
					*list = node->prev;

				else
				{
					print_list(*list);
					node = *list;
					return;
				}

			}
			node = node->next;

		}

	}

}
