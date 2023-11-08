#include "lists.h"

/**
 * rvrs_linList - reverses a linked list
 * @pointer: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
void rvrs_linList(listint_t **pointer)
{
	listint_t *prev = NULL;
	listint_t *current = *pointer;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*pointer = prev;
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @pointer: double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(listint_t **pointer)
{
	listint_t *slow = *pointer, *fast = *pointer, *temp = *pointer, *dup = NULL;

	if (*pointer == NULL || (*pointer)->next == NULL)
		return (1);

	while (1)
	{
		fast = fast->next->next;
		if (!fast)
		{
			dup = slow->next;
			break;
		}
		if (!fast->next)
		{
			dup = slow->next->next;
			break;
		}
		slow = slow->next;
	}

	rvrs_linList(&dup);

	while (dup && temp)
	{
		if (temp->n == dup->n)
		{
			dup = dup->next;
			temp = temp->next;
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}
