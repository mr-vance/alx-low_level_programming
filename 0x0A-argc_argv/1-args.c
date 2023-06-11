#include "main.h"

/**
 * count_arguments - Counts the number of arguments
 * @argv: An array of command-line arguments
 *
 * Return: The number of arguments
 */
int count_arguments(char **argv)
{
	int count = 0;

	/* Count the number of arguments */
	while (argv[count] != NULL)
		count++;

	return count - 1; /* Subtract 1 to exclude the program name */
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	int arg_count = count_arguments(argv);

	printf("%d\n", arg_count);

	return 0;
}
