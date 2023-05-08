#include "main.h"

/**
 * append_text_to_file - this is a func that appends text at the end of a file
 * @filename: this is a parameter
 * @text_content: This a parameter
 *
 * Return:1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
