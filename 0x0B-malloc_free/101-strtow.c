#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if str == NULL or str == "" or if memory allocation fails
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i = 0, j = 0, k = 0, len = 0, word_len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0' && k < word_count)
	{
		if (str[i] != ' ')
		{
			len = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				len++;
				j++;
			}

			words[k] = malloc(sizeof(char) * (len + 1));
			if (words[k] == NULL)
			{
				for (k--; k >= 0; k--)
					free(words[k]);
				free(words);
				return (NULL);
			}

			word_len = 0;
			while (i < j)
			{
				words[k][word_len] = str[i];
				i++;
				word_len++;
			}
			words[k][word_len] = '\0';
			k++;
		}
		else
			i++;
	}
	words[k] = NULL;

	return (words);
}
