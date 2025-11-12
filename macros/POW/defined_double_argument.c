#include<stdio.h>
#define POW(A, B) ((A) + (B)) * ((A) + (B))

int main(void){
    int a = 3, b = 4;
    int r = POW(a, b);
    printf("%d\n", r);
    return 0;
}

