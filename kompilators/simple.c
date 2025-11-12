#include <stdio.h>

#define ARRAY_SIZE 5
int main(void){
    //this is an array
    int arr[ARRAY_SIZE]={1,2,3,4,5};

    #ifdef WINDOWS
    int myVar=5;
    #else
    int myVar=12;
    #endif
}