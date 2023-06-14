#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void print_grid(int **grid, int width, int height);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
void print_tab(char **tab);
char **strtow(char *str);
int count_words(char *str);

#endif /* MAIN_H */
