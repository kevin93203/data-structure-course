#include <stdio.h>

int count = 0;
void honai(int n, char a, char b, char c){
    if(n==1){
        count++;
        printf("%d: from %c to %c\n",count,a,c);
    }
    else if (n>1) {
        honai(n-1,a,c,b);
        honai(1,a,b,c);
        honai(n-1,b,a,c);
    }
}

int main(){
    honai(5,'a','b','c');
}