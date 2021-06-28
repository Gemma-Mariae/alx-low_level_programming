#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: first parameter
 * @l: second parameter
 *
 * Description: l returns the length of the string
 * Return: l
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
