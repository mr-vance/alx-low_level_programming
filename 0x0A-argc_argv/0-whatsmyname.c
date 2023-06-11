#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    /* Suppress unused parameter warning */
    (void)argc;

    print_program_name(argv[0]);
    return 0;
}

/**
 * print_program_name - Prints the name of the program
 * @name: The name of the program
 */
void print_program_name(char *name)
{
    printf("%s\n", name);
}
