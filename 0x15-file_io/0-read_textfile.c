#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file.
 * @filename: text file.
 * @letters: number of letters.
 * Return: (r)  number of bytes read and printed
 *        0 with NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fp_out, var, r;

	fp_out = open(filename, O_RDONLY);
	if (fp_out == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	var = read(fp_out, buf, letters);
	r = write(STDOUT_FILENO, buf, var);

	free(buf);
	close(fp_out);
	return (r);
}

