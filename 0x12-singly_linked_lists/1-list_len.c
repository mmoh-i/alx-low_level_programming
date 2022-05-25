#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @m: an element of the list
 * Return: number of element in the list
 */

size_t list_len(const list_t *m)
{
size_t count = 0;

while (m)
{
count++;
m = m->next;
}
return (count);
}
