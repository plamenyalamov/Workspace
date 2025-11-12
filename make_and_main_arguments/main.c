#include <stdio.h>

#include "maths.h"

#include "strings.h"

int main(void){
    double rez=square(4.3);
    printf("!square: %lf \n",rez);

    int ime=name("Plamen");
    printf("len: %d \n",ime);

    return 0;
}