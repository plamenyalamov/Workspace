#include <stdio.h>
#include <string.h>

int strlength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void strconcat(char dest[], char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int strcompare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

void print_help_menu() {
    printf("=== Pomoshchno meniu ===\n");
    printf("1. strlength - Namira dulzhinata na simvolen niz.\n");
    printf("2. strconcat - Obedinyava dva simvolni niza.\n");
    printf("3. strcompare - Sravnyava dva simvolni niza.\n\n");
}

int main() {
    print_help_menu();

    char str1[100], str2[100];
    int choice;

    printf("Izberi funkciya (1-3): ");
    scanf("%d", &choice);
    getchar(); 

    if (choice == 1) {
        printf("Vavedhi niz: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Dulzhinata e: %d\n", strlength(str1));
    }
    else if (choice == 2) {
        printf("Vavedhi parvi niz: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Vavedhi vtori niz: ");
        fgets(str2, sizeof(str2), stdin);
        str2[strcspn(str2, "\n")] = '\0';
        strconcat(str1, str2);
        printf("Obedinen niz: %s\n", str1);
    }
    else if (choice == 3) {
        printf("Vavedhi parvi niz: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("Vavedhi vtori niz: ");
        fgets(str2, sizeof(str2), stdin);
        str2[strcspn(str2, "\n")] = '\0';
        int cmp = strcompare(str1, str2);
        if (cmp == 0)
            printf("Nizovete sa ednakvi.\n");
        else if (cmp < 0)
            printf("Parviat niz e po-malak.\n");
        else
            printf("Parviat niz e po-golqm.\n");
    }
    else {
        printf("Nevaliden izbor!\n");
    }

    return 0;
}
