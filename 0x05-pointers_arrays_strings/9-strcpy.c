#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcpy - to copy strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: Always 1 or 0
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	printf("\n");
	return (dest);
}
