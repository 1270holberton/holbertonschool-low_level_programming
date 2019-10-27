#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: input
 * Return: output
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	int sum = 0;

	if (n  == 0)
	{
		return (0);
	}
	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, unsigned int);
	}
	va_end(al);
	return (sum);
}
