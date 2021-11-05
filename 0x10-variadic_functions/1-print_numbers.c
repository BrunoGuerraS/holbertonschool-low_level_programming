#include "variadic_functions.h"
/**
 * print_numbers - print the number, followed by a new line
 * @separator: char
 * @n: unsigned int
 * Return: pointer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
