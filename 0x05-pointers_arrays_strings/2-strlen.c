#include "holberton.h"
/**
 * _strlen returns the length of a string
 *
 * return void
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
