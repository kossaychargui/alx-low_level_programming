#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct list_t *list_ptr;
/**
 * struct list_t - struct that hold an element of the list
 *
 * @str: the string in the element
 * @len: the length of the string
 * @next: pointer to the next element of the list.
 *
 */
typedef struct list_t
{
	char *str;
	int len;
	list_ptr next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
