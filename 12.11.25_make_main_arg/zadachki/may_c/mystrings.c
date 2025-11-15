#include "mystrings.h"

// Функция за дължина на низ
int strlength(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Конкатениране на низове
void strconcat(char str1[], const char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') i++;      // стига до края на str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';                   // край на обединения низ
}

// Лексикално сравнение
int strcompare(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return (str1[i] < str2[i]) ? -1 : 1;
        i++;
    }
    if (str1[i] == str2[i]) return 0;  // и двата низа приключват едновременно
    return (str1[i] == '\0') ? -1 : 1;
}
