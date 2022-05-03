#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints it to the POSIX std output
 * @filename: output to the name of the file
 * @letters: numbers of letters its hould read and print
 *
 * Return: if the function fails or filename is NULL - 0
 * otherwise the actual number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buf;

	if (!filename)
		return (0);


	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
