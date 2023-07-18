#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small = 'a';
	char caps = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (caps <= 'Z')
	{
		putchar(caps);
		caps++;
	}
	putchar('\n');
	return (0);
}
