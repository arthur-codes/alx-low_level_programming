#include <stdlib.h>
#include "main.h"
/**
 * create_array - A function that creates an array
 *
 * @size: a parameter for size
 *
 * @c: character parameter
 *
 * Return: Always success
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));
	if (size == 0)
		return ('\0');
	if (p == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		p[i] = c;
	p[size] = '\0';
	return (p);
}
