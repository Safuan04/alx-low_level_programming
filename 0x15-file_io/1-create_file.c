#include "main.h"

/**
 * create_file - this is a function that creates a file.
 * @filename: this is a parameter
 * @text_content: this is a parameter
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int rf, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	rf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(rf, text_content, len);

	if (rf == -1 || w == -1)
		return (-1);

	close(rf);

	return (1);
}
