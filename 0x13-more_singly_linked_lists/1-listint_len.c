#include "lists.h"

/**
 * listint_len - returns the item of the list
 * @h: linked list fir it
 *
 * Return: nodes num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
