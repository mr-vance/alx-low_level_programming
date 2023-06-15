#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (putchar(c));
}

/**
 * print_number - Prints an array of integers as a number
 * @number: The array of integers
 */
void print_number(char *number)
{
	int i;

	for (i = 0; number[i]; i++)
		_putchar(number[i]);
	_putchar('\n');
}

/**
 * check_digit - Checks if a string contains only digits
 * @number: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_digit(char *number)
{
	int i;

	for (i = 0; number[i]; i++)
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
	}

	return (1);
}
