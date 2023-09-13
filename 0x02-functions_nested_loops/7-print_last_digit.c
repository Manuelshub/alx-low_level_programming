#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: the number to be worked on
 *
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		num = -1 * (n % 10);
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = 1 * (n % 10);
		_putchar(num + '0');
		return (num);
	}

}
