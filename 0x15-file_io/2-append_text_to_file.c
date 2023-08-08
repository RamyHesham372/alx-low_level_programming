#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the file.
 * @text_content: The string to add.
 *
 * Return: on failure (-1).
 *       anything else (1).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ptr, len = 0, r;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	ptr = open(filename, O_WRONLY | O_APPEND);
	r = write(ptr, text_content, len);

	if (ptr == -1 || r == -1)
		return (-1);

	close(ptr);

	return (1);
}

