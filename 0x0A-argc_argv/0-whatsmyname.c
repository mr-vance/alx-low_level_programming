#include "main.h"

int main(int argc, char *argv[]) {
    print_program_name(argv[0]);
    return 0;
}

void print_program_name(char *name) {
    printf("%s\n", name);
}
