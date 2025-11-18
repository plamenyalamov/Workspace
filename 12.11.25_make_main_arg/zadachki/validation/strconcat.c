#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Грешка: трябва да подадете 2 аргумента.\n");
        printf("Използване: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50) {
        printf("Грешка: всеки низ трябва да бъде най-много 50 символа.\n");
        return 1;
    }

    char s1[120];
    char s2[60];

    strcpy(s1, argv[1]);
    strcpy(s2, argv[2]);

    strconcat(s1, s2);

    printf("%s\n", s1);
    return 0;
}
