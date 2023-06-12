#include "main.h"

/**
 * is_positive_number - Checks if a string is a positive number
 * @str: The string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * add_positive_numbers - Adds positive numbers
 * @argc: The number of arguments
 * @argv: The arguments array
 *
 * Return: The sum of the positive numbers, or 0 if no number is passed,
 *         or 1 if one of the numbers contains non-digit symbols.
 */
int add_positive_numbers(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	return (sum);
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The arguments array
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int sum;

	sum = add_positive_numbers(argc, argv);

	printf("%d\n", sum);

	return (0);
}
