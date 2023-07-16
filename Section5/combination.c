#include <stdio.h>
// 公式解
int fac(int n){
    if(n<=1){
        return 1;
    }
    return fac(n-1)* n;
}

int ncr(int n,int r){
    return fac(n) / (fac(r) * fac(n-r));
}

//巴斯卡三角形定理
int NCR(int n, int r){
    if(r==0 || n==r)
        return 1;
    return NCR(n-1,r-1) + NCR(n-1,r);
}

int main(){
    printf("%d\n",NCR(5,2));
}