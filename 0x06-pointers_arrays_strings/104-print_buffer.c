#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: the buffer to be printed.
 * @size: the number of bytes to be printed.
 * Description: the output must 10 bytes per line.
 * 2. Each line starts with the position of the first byte
 * of the line in hex(8 chars), starting with 0.
 * 3. Each line shows the content of the buffer, if the byte
 * is printable print the letter, if not print .
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
				if (j + 1 < size)
					printf("%02x", b[j + 1]);
				else
					printf("  ");
			}
			else
				printf("    ");
			printf(" ");
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				putchar(b[j]);
			else
				putchar('.');
		}
		printf("\n");
	}
}
