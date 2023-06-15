#include "main.h"

/**
 * allocate_memory - Allocates memory dynamically
 * @size: The size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 */
char *allocate_memory(int size)
{
	char *ptr;

	ptr = malloc(size * sizeof(char));
	return (ptr);
}

/**
 * free_memory - Frees the memory allocated dynamically
 * @ptr: The pointer to the memory to free
 */
void free_memory(char *ptr)
{
	free(ptr);
}
