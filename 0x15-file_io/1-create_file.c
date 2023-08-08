#include "main.h"

/**
 * create_file -  function that creates a file
 * @filename: pointer to file
 * @text_content: string pointer
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, size);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
