/*
 * File: 3-mul.c
 * Author: Ukonu, Divine Chisom
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int total, i, j;


	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		total = i * j;
		printf("%d\n", total);
		return (0);
	}
	printf("Error\n");
	return (1);
}
