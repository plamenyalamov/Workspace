// nmok.c ----NAI MALKO OBSHTO KRATNO

#include <stdio.h>

int ngok(int a, int b) {  // NGOK -NAI GOLQMO OBSHTO KRATNO
    while (b != 0) {
        int temp = b; 
        b = a % b;     
        a = temp;    
    }
    return a;           
}

int main() {
    int a = 12, b = 18;
    int nmok = (a * b) / ngok(a, b);

    printf("NMOK %d\n", nmok);
    return 0;
}
