#include "sort.h"
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

        temp = (*list)->next;

	print_list(*list);

        while(temp != NULL)
        {
                loop = temp->prev;
                while(loop != NULL && loop->n > temp->n)
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
