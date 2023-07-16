#include <stdio.h>

int power(int m, int n){
    if (n == 0) return 1;
    return power(m,n-1) * m;
}

int Ipower(int m, int n){
    if (n == 0) return 1;
    else if (n % 2 == 0)
        return power(m*m,n/2);
    return m * power(m*m, (n-1)/2);
}

int main(){
    printf("%d",Ipower(3,10));
}