#include "main.h"

/**
 * str_addition - Adds two positive numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 * @len1: The length of the first number
 * @len2: The length of the second number
 *
 * Return: The sum of the two numbers as a string
 */
char *str_addition(char *num1, char *num2, int len1, int len2)
{
	char *result;
	int sum, carry, i, j;

	result = allocate_memory(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += num1[i--] - '0';
		if (j >= 0)
			sum += num2[j--] - '0';

		result[len1 + len2] = sum % 10 + '0';
		carry = sum / 10;

		shift_array_left(result, len1 + len2);
	}

	return (result);
}
