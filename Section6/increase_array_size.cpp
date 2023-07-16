#include <iostream>

int main(){
    int n;
    printf("please enter array size: ");

    scanf("%d",&n);
    //smallArray size = n
    int *smallArray = new int[n];

    //設定smallArray的值
    for(int i=0;i<n;i++){
        smallArray[i] = i;
    }
    for(int i=0;i<n;i++){
       printf("%d ",smallArray[i]);
    }
    printf("\n");

    //largeArray size = 2n
    int *largeArray = new int[2*n];
    
    //把smallArray的值搬到largeArray，並且把剩餘的空間初始化為0
    for(int i=0;i<n*2;i++){
        if(i>=n) largeArray[i] = 0;
        else largeArray[i]= smallArray[i];
    }

    //刪除(歸還)smallArray的空間
    delete [] smallArray;

    //把smallArray指向largeArray
    smallArray = largeArray;
    
    //largeArray指向null
    largeArray = nullptr;

    for(int i=0;i<n*2;i++){
        printf("%d ",smallArray[i]);
    }

}