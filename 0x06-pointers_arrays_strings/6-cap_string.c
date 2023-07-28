#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * *cap_string - A function to change the beginning of a string to caps
 *
 * @c: A parameter for testing
 *
 * Return: Return always
 */
char *cap_string(char *c)
{
	int i;
	int len = strlen(c);

	for (i = 0; i < len && c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == '\n' || c[i] == '\t' || c[i] == '.')
			c[i + 1] = toupper(c[i + 1]);
	}
	return (c);
}
