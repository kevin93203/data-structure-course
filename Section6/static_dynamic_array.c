#include <stdio.h>
#include <stdlib.h>


int main(){
    int A[] = {1,2,3,4,5};
    int n;
    scanf("%d",&n);
    int *P = (int *)malloc(n * sizeof(int));
    
    // P[0] = 5;
    // P[1] = 4;
    // P[2] = 3;
    // P[3] = 2;
    // P[4] = 1;

    for(int i = 0;i<n;i++){
        P[i] = i;
    }

    for(int i = 0;i<5;i++)
        printf("%d ",A[i]);
    printf("\n");
    
    for(int i = 0;i<n;i++)
        printf("%d ",P[i]);

    free(P);

    return 0;
}