#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function to return a pointer with string copy
 *
 * @str: A string parameter for testing
 *
 * Return: Always success
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;
	unsigned int str_length = 0;

	if (str == NULL)
		return ('\0');
	while (*(str + str_length) != '\0')
		str_length++;
	str_length++;

	p = malloc(sizeof(*str) * str_length);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < str_length; i++)
		p[i] = *(str + i);

	p[i] = '\0';

	return (p);
}
