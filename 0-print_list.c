#include <stdio.h>
#include "lists.h"

/**
 * print_list - ...
 * @h: ...
 *
 * Return: ...
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        /* Si la chaîne est NULL, afficher [0] (nil) */
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next;
        count++;
    }

    return (count);
}
