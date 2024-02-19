#include "sort.h"

/**
 * swap_nodes - function to swap two nodes in a
 *doubly linked list
 *
 * @temp: address of the first node
 * @d: addresss of the second node
 *
 * Return: void
*/

void swap_nodes(listint_t *temp, listint_t *d)
{
	if (temp->prev)
	{
		temp->prev->next = d;
	}
	if (d->next)
	{
		d->next->prev = temp;
	}
	temp->next = d->next;
	d->prev = temp->prev;
	temp->prev = d;
	d->next = temp;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 *in ascending order using the Insertion sort algorithm
 *
 * @list: address of pointer to head node
 *
 * Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y;

	if (!list || !*list || !(*list)->next)
	{
		return;
	}

	x = (*list)->next;

	while (x)
	{
		y = x;
		x = x->next;
		while (y && y->prev)
		{
			if (y->prev->n > y->n)
			{
				swap(y->prev, y);
				if (!y->prev)
				{
					*list = y;
				}
				print_list((const listint_t *)*list);
			}
			else
			{
				y = y->prev;
			}
		}

	}

}
