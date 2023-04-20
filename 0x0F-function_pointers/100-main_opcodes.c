#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of its own main function
 * @n: number of bytes to print
 */
void print_opcodes(int n)
{
	int i;

	unsigned char *addr = (unsigned char *) &print_opcodes;
	for (i = 0; i < n; i++)
	{
		printf("%02x ", addr[i]);
	}
	printf("\n");
}
/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, 1 if number of arguments is incorrect, 2 if argument is negative
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(n);
	return (0);
}
