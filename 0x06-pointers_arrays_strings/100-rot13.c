#include "main.h"
#include <stdio.h>
/**
 * *rot13 - a function to rotate a character to it's 13 character
 *
 * @c: c parameter for testing
 *
 * Return: Return always
 */
char *rot13(char *c)
{
	int i, j, k;
	char first_characters[] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D',
				'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i',
				'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n',
				'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u',
				'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
	char second_characters[] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R',
				's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z',
				'Z', 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G',
				'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		k = 0;
		while (first_characters[j] != '\0')
		{
			if (c[i] == first_characters[j])
			{
				k = j;
				c[i] = second_characters[k];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
