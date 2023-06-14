#include "main.h"

/**
 * _strncpy - Copies at most n characters from the string pointed to by src,
 *            including the null byte, to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of characters to be copied.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* Implementation of _strncpy function */
	return (strncpy(dest, src, n));
}
