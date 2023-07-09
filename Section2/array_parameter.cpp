#include <iostream>

using namespace std;

// int A[] is pass by address ( same as int *A)
void printArray(int *A,int size){
    for(int i=0;i<size;i++){
        cout << A[i] << endl;
    }
    cout << "Size: " << sizeof(A) / sizeof(int) << endl; //A is a pointer, pointer size is 8 bytes
}


int * getNewIntArray( int size){
    int * ptr = new int[size];
    for(int i = 0;i<size; i++){
        ptr[i] = 0;
    }
    return ptr;
}

// // will get warning: address of local variable 'array' returned， and it is not work
// int * gerNewIntArrayWithLocalStack(int size){
//     int array[size] = {0};
//     int *ptr = array;
//     return array;
// }

int main(){
    int A[] = {2, 4, 6, 8, 10};
    int size = 5;
    printArray(A, size);
    cout << "Size: " << sizeof(A) / sizeof(int) << endl; //A is a int array, int array size is 4 * 5 = 20 bytes
    
    int *ptr = getNewIntArray(5);
    for(int i = 0;i<size; i++){
        cout << ptr[i] << endl;
    }
    return 0;
}