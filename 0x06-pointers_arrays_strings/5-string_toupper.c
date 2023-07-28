#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * *string_toupper - converts all characters to upper
 *
 * @c: parameter
 *
 * Return: Returns all in caps
 */
char *string_toupper(char *c)
{
	int i;
	int len = strlen(c);

	for (i = 0; i < len && c[i] != '\0'; i++)
	{
		c[i] = toupper(c[i]);
	}
	return (c);
}
