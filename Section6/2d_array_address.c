#include <stdio.h>

int main(){
    int X[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    printf("%u\n",X);
    printf("%u\n",X+3);
    printf("%u\n",*(X+3));
    printf("%u\n",*(X+2)+3);
    
    printf("%d\n",**(X+3));
    printf("%d\n",*(*(X+2)+3));
}