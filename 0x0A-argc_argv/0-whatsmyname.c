#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	print_program_name(argv[0]);
	return (0);
}

/**
 * print_program_name - Prints the name of the program
 * @name: The name of the program
 */
void print_program_name(char *name)
{
	printf("%s\n", name);
}
