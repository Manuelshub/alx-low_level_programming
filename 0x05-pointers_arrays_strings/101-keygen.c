#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point to a program that generates random
 * password.
 * Return: 0.
 */
int main(void)
{
	int check[100];
	int i, j, k;

	j = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		check[i] = rand() % 78;
		j += check[i] + '0';
		putchar(check[i] + '0');
		if ((2772 - j) - '0' < 78)
		{
			k = 2772 - j - '0';
			j = j + k;
			putchar(k + '0');
			break;
		}
	}
	return (0);
}
