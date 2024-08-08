#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins needed to make change.
 *
 * @argc: The number of command line arguments.
 * @argv: An array of command line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char **argv)
{
    int i;
    int value;
    int change = 0;
    int denominations[] = {25, 10, 5, 2, 1};
    int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

    if (argc <= 1)
    {
        printf("Error\n");
        return (1);
    }

    value = atoi(argv[1]);

    for (i = 0; i < num_denominations; i++)
    {
        while (value >= denominations[i])
        {
            value -= denominations[i];
            change++;
        }
    }

    printf("%d\n", change);

    return 0;
}
