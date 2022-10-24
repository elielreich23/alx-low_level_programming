#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the 1st node of the linked list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t nodesum = 0;

while (h)
{
printf("%d\n", h->n);
nodesum++;
h = h->next;
}
return (nodesum);
}
