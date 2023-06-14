#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: Nothing
 */

void print_tab(char **tab)
{
	int i = 0;

	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

int main(void)
{
	char **tab;

	tab = strtow("      Holberton School         #cisfun      ");
	print_tab(tab);
	return (0);
}
