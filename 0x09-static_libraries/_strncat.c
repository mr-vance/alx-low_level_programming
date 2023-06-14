#include "main.h"

/**
 * _strncat - Concatenates at most n characters from the string
 *            pointed to by src to the end of the string pointed to by dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be appended.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/* Implementation of _strncat function */
	return (strncat(dest, src, n));
}
