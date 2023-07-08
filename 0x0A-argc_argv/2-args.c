
#include <stdio.h>
#include <stdlib.h>
/*
 * main - prints all arguments it receive
 * @argc: input
 * @argv: string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
