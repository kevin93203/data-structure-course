#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array array){
    for(int i=0;i<array.length;i++)
        printf("%d ",array.A[i]);
    printf("\n");
}


int main(){
    struct Array array;
    printf("Enter size of the array: ");
    scanf("%d",&array.size);
    array.A = (int*)malloc(array.size * sizeof(int));

    printf("Enter number of the array's value: ");
    scanf("%d",&array.length);

    for(int i=0;i<array.length;i++){
        printf("Enter the array's value: ");
        scanf("%d",&array.A[i]);
    }

    display(array);

    return 0;
}