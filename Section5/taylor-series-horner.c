#include <stdio.h>

//iteration
double e(double x, double n){
    double s = 1;
    for(;n>0;n--){
        s = 1 + (x/n * s);
    }
    return s;
}

//recursion
double e_r(double x, double n){
    static double s = 1;
    if(n==0)
        return s;
    s = 1 + (x/n * s);
    return e_r(x, n-1);
}


int main(){
    printf("%lf",e_r(1,10));
}