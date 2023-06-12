#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_program_name(char *name);
int count_arguments(char **argv);
void print_arguments(char **argv);
int multiply(int num1, int num2);
int is_digit(char c);
int is_valid_number(char *str);
int sum_positive_numbers(int argc, char *argv[]);
int min_coins(int cents);
int add_positive_numbers(int argc, char *argv[]);
int is_positive_number(char *str);
int add_positive_numbers(int argc, char *argv[]);

#endif /* MAIN_H */
