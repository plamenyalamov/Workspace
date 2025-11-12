#include <stdio.h>
#include "math.h"
long pow(int x,int y){
    long rez=1;
    for(int i=1;i<=y;i++){
        rez=rez*x;
}
return rez;
}
