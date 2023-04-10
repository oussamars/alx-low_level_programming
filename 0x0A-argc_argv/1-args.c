#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - print a number
 * @argc: integer containing number of arguments
 * @argv: string
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
