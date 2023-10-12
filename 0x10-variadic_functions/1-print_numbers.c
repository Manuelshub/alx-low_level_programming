#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* creating va_list to store all variable arguments list */
	va_list my_args;
	unsigned int num;
	unsigned int i;

	/* initializing va_list for all the number of arguments */
	va_start(my_args, n);

	/* looping through to access arguments in va_list */
	for (i = 0; i < n; i++)
	{
		num = va_arg(my_args, unsigned int);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", num);
	}
	va_end(my_args);
	printf("\n");
}
