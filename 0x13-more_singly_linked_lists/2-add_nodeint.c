#include "lists.h"

/**
 * add_nodeint - adds a new node at the start
 * @head: pointer to the number one node
 * @n: data in it
 *
 * Return: pointer for the next code
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
