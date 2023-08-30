#include "lists.h"

/**
 * pop_listint - deletes the head node in it
 * @head: points to the first item
 *
 * Return: the data in te element sucess
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
