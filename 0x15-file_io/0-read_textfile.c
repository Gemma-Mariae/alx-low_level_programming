/*
 * File: 0-read_textfile.c
 * Author: Ukonu, Divine Chisom
 */

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	char *buffer;
	ssize_t rd, wr;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	rd = read(op, buffer, letters);
	if (rd == -1)
		return (free(buffer), 0);
	close(op);

	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	if (wr != rd)
		return (0);
	return (rd);
}
