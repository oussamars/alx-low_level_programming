#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of the file.
 * @argc: is the number of agrguments
 * @argv: is a string array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
