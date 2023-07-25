#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcat - This function concatenates a string to another
 *
 * @dest: Destination parameter
 *
 * @src: Source parameter
 *
 * Return: Returns destination
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest + '\0');
}
