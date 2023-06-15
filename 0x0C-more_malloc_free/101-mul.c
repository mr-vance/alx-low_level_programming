#include "main.h"

/**
 * main - Multiplies two positive numbers
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3 || !check_digit(argv[1]) || !check_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply_numbers(num1, num2);
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	print_number(result);
	free_memory(result);
	return (0);
}
