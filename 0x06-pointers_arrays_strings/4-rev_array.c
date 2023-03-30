#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the first integer
 * @n: the second integer
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
