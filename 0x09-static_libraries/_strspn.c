#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 *           which consists entirely of characters from accept.
 * @s: The string to be analyzed.
 * @accept: The string containing the characters to match.
 *
 * Return: The length of the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	/* Implementation of _strspn function */
	return (strspn(s, accept));
}
