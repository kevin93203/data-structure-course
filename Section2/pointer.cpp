#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length; // 4 bytes
    int breadth; // 4 bytes
    char x; //pick up 4 bytes but only use 1 byte
};



int main()
{
    int a = 10;
    int *p; // 宣告一個int pointer
    p = &a; // p的值就會是a的位址
    cout << a << endl;
    a = 11;
    cout << a << endl;
    cout << *p << endl; // dereference(取值)
    cout << p << ", " << &a << endl;

    int A[] = {2,4,6,8,10};
    p = A; // A本身就是pointer，所以不用使用&
    for (int i=0;i<5;i++){
        cout << p[i] << endl;
    }

    // dynamic allocate memory (in heap)
    // p = (int *)malloc(5 * sizeof(int)); // array in heap (c style) 
    p = new int[5]; // c++ style
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    for (int i=0;i<5;i++){
        cout << p[i] << endl;
    }

    // 清掉 memory (heap) 使用dynamic allocate後要記得清掉
    // free(p); // c style
    delete [] p; // c++ style

    cout << "===============================================" << endl;

    // pointer不管什麼data type，占用的size都是一樣的(pointer的type只是用來表示他指向的資料型態是什麼)
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p1) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
}