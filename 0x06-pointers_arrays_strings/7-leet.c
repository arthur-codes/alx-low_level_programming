#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * *leet - A function to change some of the characters
 *
 * @c: A parameter for testing
 *
 * Return: Always
 */
char *leet(char *c)
{
	int i;
	int j;
	int k;
	char characters[] = "aAeEoOtTlL";
	char digits[] = "4433007711";

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		k = 0;
		while (characters[j] != '\0')
		{
			if (c[i] == characters[j])
			{
				k = j;
				c[i] = digits[k];
			}
			j++;
		}
		i++;
	}
	return (c);
}
