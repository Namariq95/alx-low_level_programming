#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	/* find the size of dest array */
	while (dest[i])
	i++;

	for (j = 0; src[j] ; j++)
		det[i++] = src[j];

	return (dest);
}
