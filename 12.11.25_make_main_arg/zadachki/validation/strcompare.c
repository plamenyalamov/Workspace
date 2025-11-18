#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Грешка: трябва да подадете 2 аргумента.\n");
        printf("Използване: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    printf("%d\n", strcompare(argv[1], argv[2]));
    return 0;
}
