#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of parameters(strings) passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* storing all variable arguments in a variable of type va_list*/
	va_list my_args;
	unsigned int i;
	char *ptr;

	/* initializing va_list for all the number of arguments */
	va_start(my_args, n);

	/* accessing the arguments in the va_list */
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(my_args, char *);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
	}
	va_end(my_args);
	printf("\n");
}
