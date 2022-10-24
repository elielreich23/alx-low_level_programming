#include "lists.h"
/**
 * listint_len - function that returns the number of linked list
 * @h: pointer to the 1st node of the linked list
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t nodesum = 0;

while (h)
{
nodesum++;
h = h->next;
}
return (nodesum);
}
