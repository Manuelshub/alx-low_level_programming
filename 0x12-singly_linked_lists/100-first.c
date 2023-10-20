#include "lists.h"

/**
 * my_func - prints a string.
 *
 * __attribute__((constructor)): lets us execute this function before the
 *	the main function.
 */
__attribute__((constructor))void my_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
