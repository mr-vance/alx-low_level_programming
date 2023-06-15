#include "main.h"

/**
 * multiply_numbers - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The product of the two numbers as a string
 */
char *multiply_numbers(char *num1, char *num2)
{
	char *result, *temp_result;
	int i, j, len1, len2, carry, n1, n2, sum;

	len1 = 0;
	while (num1[len1])
		len1++;
	len2 = 0;
	while (num2[len2])
		len2++;

	result = allocate_memory(len1 + len2);
	if (result == NULL)
		return (NULL);

	temp_result = allocate_memory(len1 + len2);
	if (temp_result == NULL)
	{
		free_memory(result);
		return (NULL);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + temp_result[j + i + 1] + carry;
			temp_result[j + i + 1] = sum % 10;
			carry = sum / 10;
		}

		temp_result[i] += carry;
	}

	for (i = 0; i < len1 + len2; i++)
		result[i] = temp_result[i] + '0';

	free_memory(temp_result);
	return (result);
}
