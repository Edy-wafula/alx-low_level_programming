#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: the string to add the end of the file
 * Return: if the function fails or filename is NULL - -1.
 * if the file does not exist the user lacks write permission - 1.
 * otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, x, len = 0;

	if (filename == NULL) || text_content == NULL)
		return (-1);
	
	for (len = 0; text_content[len];)
			len++;
	
	w = open(filename, O_WRONLY | O_APPEND);
	if (w == -1)
		return (-1);

	x = write(w, text_content, len);
	if (x == -1 x || x != len)
	{
		close(w);
		return (-1);
	}

	close(w);
	return (1);
}
