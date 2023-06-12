#include "main.h"

/**
 * is_digit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * is_valid_number - Checks if a string is a valid number
 * @str: The string to check
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int is_valid_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!is_digit(str[i]))
			return (0);
		i++;
	}

	return (1);
}

/**
 * sum_positive_numbers - Sums the positive numbers passed as arguments
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: The sum of the positive numbers, or 0 if no numbers are passed,
 *         or 1 if there is an invalid number
 */
int sum_positive_numbers(int argc, char *argv[])
{
	int i, num, sum = 0;
	int invalid_number = 0;

	if (argc <= 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (is_valid_number(argv[i]))
		{
			num = atoi(argv[i]);
			if (num > 0)
				sum += num;
		}
		else
		{
			invalid_number = 1;
		}
	}

	if (invalid_number)
	{
		printf("Error\n");
		return (1);
	}

	return (sum);
}


/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int result = sum_positive_numbers(argc, argv);

	printf("%d\n", result);

	return (result == 0 ? 0 : 1);

}
