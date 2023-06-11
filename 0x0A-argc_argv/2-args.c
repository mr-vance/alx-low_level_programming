#include "main.h"


/**
 * print_arguments - Prints all command-line arguments
 * @argv: An array of command-line arguments
 */
void print_arguments(char **argv)
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
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

	print_arguments(argv);

	return (0);
}
