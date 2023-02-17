#include <stdio.h>
#include <unistd.h>

/**
 * main - this is the entry point
 *
 * void: when value x is void
 *
 * unistd header: has the function write
 *
 * Return: successful when 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
