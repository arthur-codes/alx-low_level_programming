#include "main.h"
#include <string.h>
/**
 * *_strncpy - A function to copy strings to a destination
 *
 * @dest: Destination parameter
 *
 * @src: source parameter
 *
 * @n: number of characters to be copied from source to destination
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
