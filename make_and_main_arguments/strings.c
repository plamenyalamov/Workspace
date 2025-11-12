#include "strings.h"

int name(char name1[]){
    int i;
    for(i=0;name1[i]!='\0';i++);
    return i;
}