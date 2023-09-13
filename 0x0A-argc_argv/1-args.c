#include <stdio.h>
/**
 * main - Entry point of the code
 *
 * @argc: argument count as parameter
 *
 * @argv: argument vector as parameter
 *
 * Return: Always 0 or success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
