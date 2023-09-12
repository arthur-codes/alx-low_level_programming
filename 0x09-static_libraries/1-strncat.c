#include "main.h"
#include <string.h>
/**
 * *_strncat - a function to concatenate two strings
 *
 * @dest: The destination parameter
 *
 * @src: The source parameter
 *
 * @n: number of characters
 *
 * Return: Returns destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest + '\0');
}
