#include "holberton.h"
/**
 * main - swap the value of two integers
 *
 * return void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
