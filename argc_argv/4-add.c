#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Adds positive numbers from arguments.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * return 0 (success), 1 (error).
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("No Numbers passed\n", argv[]);
		return (0);
	}
	int i;
	int number;

	for (i = 0; i < argc; i++)
	{
		number = atoi(argv[i]);
		if (number <= 0)
	{
		printf("Error, Not a positive number: %s\n", argv[i]);
		return (1);
	}
	sum += number;
	}
	printf("sum is: %d\n", sum);
	return (0);
}
