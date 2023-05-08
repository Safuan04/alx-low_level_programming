#include "main.h"

/**
 * read_textfile- Read text file
 * @filename: this is a parameter
 * @letters: this is a parameter
 * Return: w
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t rf;
	ssize_t w;
	ssize_t t;

	rf = open(filename, O_RDONLY);
	if (rf == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(rf, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(rf);
	return (w);
}
