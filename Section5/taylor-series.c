#include <stdio.h>

// power和fac利用static累乘計算(因為會先呼叫遞迴，所以r會先算到最後，等n=0時才會回傳開始計算p和r) -> 較有效率，因為採累乘的fac和power不用重複計算
double e(int x, int n){
    static double p = 1,f = 1;
    double r;
    if(n==0)
        return 1;
    else {
        r = e(x, n-1);
        p = p * x;
        f = f * n;
        return r + p/f;
    }
}

// 以下fac和power直接套寫好的function
int fac(int n){
    if (n == 0){
        return 1;
    }
    return fac(n-1) * n;
}

int Ipower(int m, int n){
    if (n == 0) return 1;
    else if (n % 2 == 0)
        return Ipower(m*m,n/2);
    return m * Ipower(m*m, (n-1)/2);
}

double e_(int x, int n){
    if(n==0)
        return 1;
    return e(x, n-1) + Ipower(x,n)/fac(n);
}


int main(){
    printf("%lf",e(1,10));
}