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

	return (count - 1); /* Subtract 1 to exclude the program name */
}


/**
 * multiply - Multiplies two numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of the multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	int arg_count = count_arguments(argv);
	int num1, num2, result;

	if (arg_count != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
