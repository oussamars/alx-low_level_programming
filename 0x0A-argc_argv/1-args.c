#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - print a number
 * @argc: integer containing number of arguments
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int num = argc - 1;

	printf("%d\n", num);
	return (0);
}
