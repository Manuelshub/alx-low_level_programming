#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to function.
 */
void print_all(const char * const format, ...)
{
	/* storing the variable argument in va_list */
	va_list my_args;
	int cont, i;
	char *s, *diff, c;
	float f;

	diff = "";
	/* inializing the list*/
	va_start(my_args, format);

	/* accessing the arguments in the list */
	cont = 0;
	while (format[cont])
	{
		switch(format[cont])
		{
			case 'c':
				c = va_arg(my_args, int);
				printf("%s%c", diff, c);
				break;
			case 'i':
				i = va_arg(my_args, int);
				printf("%s%d", diff, i);
				break;
			case 'f':
				f = va_arg(my_args, double);
				printf("%s%f", diff, f);
				break;
			case 's':
				s = va_arg(my_args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", diff, s);
				break;
			default:
				break;
		}
		diff = ", ";
		cont++;
	}
	va_end(my_args);
	printf("\n");
}
