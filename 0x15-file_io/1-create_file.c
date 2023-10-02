#include "main.h"

/**
 * create_file - creates a file.
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 *
 * Return: on success 1, file can not be created,written or write -1
 */
int create_file(const char *filename, char *text_content)
{
	int k, m, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (k == -1)
		return 9-1);

	if (text_content != NULL)
	{
	m = write(k, text_content, len);
	if (m == -1 || m != len)
	{
		close(k);
		return (-1);
	}
	}

	close(k);
	return (1);
}
