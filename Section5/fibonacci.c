#include <stdio.h>

// iteration
int fib_i(int n){
    int t0 = 0, t1 = 1, tn = 0;
    for(int i=2;i<=n;i++){
        tn = t0 + t1;
        t0 = t1;
        t1 = tn;
    }
    return tn;
}

// recursion
int fib_r(int n){
    if(n <= 1)
        return n;
    return fib_r(n-2) + fib_r(n-1);
}

// recursion with memoization
int F[10]; 

int fib_r_m(int n){
    if(n <= 1){
        F[n] = n;
        return F[n];
    }
    if(F[n-2] == -1){
        F[n-2] = fib_r_m(n-2);
    }
    if(F[n-1] == -1){
        F[n-1] = fib_r_m(n-1);
    }
    F[n] = F[n-2] + F[n-1];
    return F[n];
}

int main(){
    for (int i = 0;i<10;i++)
        F[i] = -1;
    printf("%d\n",fib_r_m(8));
}