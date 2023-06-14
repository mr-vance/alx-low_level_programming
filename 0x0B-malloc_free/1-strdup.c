#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string.
 *         NULL if str is NULL or if insufficient memory is available.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	/* Return NULL if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicated string */
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	/* Copy the string to the newly allocated memory */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
