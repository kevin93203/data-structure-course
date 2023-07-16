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

void add(struct Array *array, int x){
    if(array->length < array->size){
        array->A[array->length] = x;
        array->length++;
    }
}

void insert(struct Array *array,int index, int x){
    if(index>=0 && index <= array->length && array->length < array->size){
        for(int i=array->length;i>index;i--)
            array->A[i] = array->A[i -1];
        array->A[index] = x;
        array->length++;
    }
}

int delete(struct Array *array,int index){
    int x;
    if(index >=0 && index<= array->length && array->length>0){
        printf("delete\n");
        x = array->A[index];
        for(int i=index;i<array->length;i++)
            array->A[i] = array->A[i+1];
        array->length--;
        return x;
    }
    return 0;
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

    // add(&array,6);

    // insert(&array,3,10);

    printf("%d\n",delete(&array,1));

    display(array);

    return 0;
}