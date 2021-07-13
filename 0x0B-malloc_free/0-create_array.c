/*
 * File: 0-create_array.c
 * Author: Ukonu, Divine Chisom
 *
 */

#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char
 * @size: size af the array
 * @c: character initialized to the array
 * Return: NULL if it fails
 *         Pointer - if successful
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
