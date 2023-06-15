#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void print_number(char *number);
int check_digit(char *number);
char *multiply_numbers(char *num1, char *num2);
char *str_addition(char *num1, char *num2, int len1, int len2);
void shift_array_left(char *arr, int n);
char *allocate_memory(int size);
void free_memory(char *ptr);

#endif /* MAIN_H */
