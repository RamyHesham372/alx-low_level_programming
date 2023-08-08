#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the file.
 * @text_content: A pointer to a string to write.
 *
 * Return: on failure  (-1).
 *         anything else - (1).
 */
int create_file(const char *filename, char *text_content)
{
	int fptr, len = 0, r;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(fptr, text_content, len);

	if (fptr == -1 || r == -1)
		return (-1);

	close(fptr);

	return (1);
}

