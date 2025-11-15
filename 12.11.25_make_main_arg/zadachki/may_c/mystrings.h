#ifndef MYSTRINGS_H
#define MYSTRINGS_H

// Връща дължината на символен низ
int strlength(const char str[]);

// Конкатенира str2 към str1
void strconcat(char str1[], const char str2[]);

// Сравнява два низа лексикално
// Връща -1, 0 или 1
int strcompare(const char str1[], const char str2[]);

#endif
