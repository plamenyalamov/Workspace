#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50) {
        printf("Error: Each string must be <= 50 characters.\n");
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
