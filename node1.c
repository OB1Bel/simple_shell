#include "shell.h"

/**
 * _list_len - func get len of linker
 * @h: pointer
 * Return: size
 */

size_t _list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
/**
 * _list_to_string - funct return arr str
 * @head: pointer
 * Return: array of string
 */

char **_list_to_string(list_t *head)
{
	list_t *node = head;
	size_t i = _list_len(head), j;
	char **strs, *str;

	if (!head || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
		if (!strs)
			return (NULL);
		for (i = 0; node; node = node->next, i++)
		{
			str = malloc(_strlen(node->str) + 1);
			if (!str)
			{
				for (j = 0; i < i; j++)
					free(strs[j]);
				free(strs);
				return (NULL);
			}

			str = _strcpy(str, node->str);
			strs[i] = str;
		}
		strs[i] = NULL;
		return (strs);
}

/**
 * _print_list - function print element of linked
 * @h: pointer
 * Return: size
 */

size_t _print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(_convert_number(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * _node_starts_with - function return node start while pref
 * @node: pointer
 * @prefix: string to match
 * @c: next char aftter prefx
 * Return: node or null
 */

list_t *_node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = _starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}
/**
 * _get_node_index - function get index
 * @head: pointer
 * @node: pointer
 * Return: index
 */

ssize_t _get_node_index(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	return (-1);
}
