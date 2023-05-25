#include "shell.h"

/**
 * _strncpy - fuunction copy a string
 * @dest: destination
 * @src: source str
 * @n: amount cpy
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, k;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		k = i;
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
	}
	return (s);
}

/**
 * _strncat - function concat 2 string
 * @dest: 1st string
 * @src: 2nd string
 * @n: amount of bytes used
 * Return: concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;
	char *s = dest;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	if (k < n)
		dest[i] = '\0';

	return (s);
}

/**
 * _strchr - function locat char n string
 * @s: string
 * @c: char
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
