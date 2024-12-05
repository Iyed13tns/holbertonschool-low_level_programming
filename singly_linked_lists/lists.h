#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* Pour size_t */

/**
 * struct list_s - liste simplement chaînée
 * @str: chaîne de caractères (allocée dynamiquement)
 * @len: longueur de la chaîne
 * @next: pointeur vers le nœud suivant
 *
 * Description: structure d’un nœud de liste simplement chaînée
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Prototypes */
size_t print_list(const list_t *h);

#endif /* LISTS_H */

