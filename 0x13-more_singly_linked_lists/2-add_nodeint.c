#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - Add the node at the start of a listint_t list.
  * @head: Double pointer header file
  * @n: int add the list
  * Return: NULL if it fails
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
