# ALX Low Level Programming - 0x0B-malloc_free

This repository contains the solutions for the ALX Low Level Programming project on dynamic memory allocation using `malloc` and `free`. Each task is implemented as a separate C file and is described below.

## Tasks

### 0. Float like a butterfly, sting like a bee

Write a function `create_array` that creates an array of chars and initializes it with a specific char.

- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` is `0`
- Returns a pointer to the array, or `NULL` if it fails

### 1. The woman who has no imagination has no wings

Write a function `_strdup` that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype: `char *_strdup(char *str);`
- Returns `NULL` if `str` is `NULL`
- Returns a pointer to the duplicated string on success, or `NULL` if insufficient memory was available

### 2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function `str_concat` that concatenates two strings.

- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
- If `NULL` is passed, treat it as an empty string
- The function should return `NULL` on failure

### 3. If you even dream of beating me you'd better wake up and apologize

Write a function `alloc_grid` that returns a pointer to a 2-dimensional array of integers.

- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to `0`
- The function should return `NULL` on failure
- If `width` or `height` is `0` or negative, return `NULL`

### 4. It's not bragging if you can back it up

Write a function `free_grid` that frees a 2-dimensional grid previously created by the `alloc_grid` function.

- Prototype: `void free_grid(int **grid, int height);`

## Requirements

- All programs and functions will be compiled with `gcc` using the flags `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`
- The code should use the `Betty` style
- The main files should include a header file called `main.h`

## Compilation and Output

```bash
$ gcc -Wall -Werror -Wextra -pedantic main.c <file_name>.c -o <output_file_name>
```