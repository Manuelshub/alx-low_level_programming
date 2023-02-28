#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout
 * @z: the character to be printed
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char z)
{
	return (write(1, &z, 1));
}
