#include <stdio.h>
#include <stdlib.h>

int main(){
    //all in stack
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i= 0;i<3;i++){
        for(int j=0;j<4;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }

    printf("\n");


    // array of pointer in stack
    int *B[3];
    B[0] = (int*)malloc(4 * sizeof(int));
    B[1] = (int*)malloc(4 * sizeof(int));
    B[2] = (int*)malloc(4 * sizeof(int));
    for(int i= 0;i<3;i++){
        for(int j=0;j<4;j++)
            B[i][j] = i*4+j+1;
    }
    for(int i= 0;i<3;i++){
        for(int j=0;j<4;j++)
            printf("%d ",B[i][j]);
        printf("\n");
    }


    printf("\n");


    // pointer of pointer in stack
    int **C;
    C = (int **)malloc(3 * sizeof(int *));
    C[0] = (int*)malloc(4 * sizeof(int));
    C[1] = (int*)malloc(4 * sizeof(int));
    C[2] = (int*)malloc(4 * sizeof(int));
    for(int i= 0;i<3;i++){
        for(int j=0;j<4;j++)
            C[i][j] = i*4+j+1;
    }
    for(int i= 0;i<3;i++){
        for(int j=0;j<4;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

}