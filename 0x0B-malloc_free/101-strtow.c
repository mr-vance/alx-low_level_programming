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
 * allocate_words - Allocates memory for the words array
 * @word_count: The number of words
 *
 * Return: The allocated words array
 */
char **allocate_words(int word_count)
{
	char **words;

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	return (words);
}

/**
 * copy_word - Copies a word from the input string to the words array
 * @word: The destination word array
 * @str: The source string
 * @start: The start index of the word in the string
 * @end: The end index of the word in the string
 */
void copy_word(char *word, char *str, int start, int end)
{
	int i, j = 0;

	for (i = start; i < end; i++)
	{
		word[j] = str[i];
		j++;
	}
	word[j] = '\0';
}

/**
 * split_words - Splits the input string into words
 * @str: The input string
 * @words: The words array
 *
 * Return: 1 on success, 0 on failure
 */
int split_words(char *str, char **words)
{
	int i = 0, j = 0, k = 0, len = 0;

	while (str[i] != '\0' && words[k] != NULL)
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
				return (0);

			copy_word(words[k], str, i, j);

			k++;
			i = j;
		}
		else
			i++;
	}

	return (1);
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
	int word_count, i;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = allocate_words(word_count);
	if (words == NULL)
		return (NULL);

	if (!split_words(str, words))
	{
		for (i = 0; i < word_count; i++)
			free(words[i]);
		free(words);
		return (NULL);
	}

	return (words);
}

