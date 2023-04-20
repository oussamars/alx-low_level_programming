#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: first integer
 * Return: 0 if n = 0 and the sum of integers otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
