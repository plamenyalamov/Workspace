#include "mystrings.h"

int strlength(const char *s) {
    int len = 0;

    while (s[len] != '\0') {
        len++;
    }

    return len;
}

void strconcat(char *s1, const char *s2) {
    int i = 0;
    int j = 0;

    while (s1[i] != '\0') {
        i++;
    }

    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';
}

int strcompare(const char *s1, const char *s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] < s2[i]) {
            return -1;
        }
        if (s1[i] > s2[i]) {
            return 1;
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0') return 0;
    if (s1[i] == '\0') return -1;
    return 1;
}
