#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: if 2 arguments then 0 else 1
 */

int main(int argc, char *argv[])
{
	int j, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	j = n1 * n2;

	printf("%d\n", j);

	return (0);
}
