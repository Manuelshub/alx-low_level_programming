#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function pointer.
 * @s: pointer to the operator.
 *
 * Return: a pointer to the function that corresponds to the
 *	operator given as parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL || ops[i].f != NULL)
	{
		if (strlen(s) == 1 && (*(ops[i].op) == *s && *s != '\0'))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
