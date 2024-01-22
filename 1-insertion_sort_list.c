#include "sort.h"

/**
 * list_size - finds size of doubly linked list
 * @list: list to find size
 *
 * Return: size
 *
 */
size_t list_size(listint_t **list)
{
	size_t count = 0;
	listint_t *temp;

	if (*list == NULL || (*list)->next == NULL || list == NULL)
		return (0);

	temp = *list;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

/**
 * insertion_sort_list - sorts a list in ascending order
 * @list: list to be sorted
 *
 * Return: Nothing!
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *loop;
	size_t size = list_size(list);

	if (size < 2)
		return;

	temp = (*list)->next;
	while (temp != NULL)
	{
		loop = temp->prev;
		while (loop != NULL && loop->n > temp->n)
		{
			if (loop->prev != NULL)
				loop->prev->next = temp;
			if (temp->next != NULL)
				temp->next->prev = loop;

			loop->next = temp->next;
			temp->prev = loop->prev;
			loop->prev = temp;
			temp->next = loop;
			if (temp->prev == NULL)
			{
				*list = temp;
			}
			loop = temp->prev;
			print_list(*list);
		}
		temp = temp->next;
	}
}
