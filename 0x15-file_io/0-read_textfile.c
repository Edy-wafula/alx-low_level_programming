#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text name being read
 * @letters: number of letters to be read
 * Return:  actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	char d;
	char j;
	char k;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	k = read(d, buf, letters);
	j = write(STDOUT_FILENO, buf, k);

	free(buf);
	close(d);
	return (j);
}
