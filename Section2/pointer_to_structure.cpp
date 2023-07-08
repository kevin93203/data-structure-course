#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length; // 4 bytes
    int breadth; // 4 bytes
};


int main(){

    // struct Rectangle r1={10,5}; // c style
    Rectangle r1={10,5}; // c++ style
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    Rectangle *p = &r1;
    cout << (*p).length << endl; //p本身沒有length和breadth，所以需要先做dereference(destructure)
    cout << (*p).breadth << endl;

    cout << p->length << endl; // shortcut of (*p).
    cout << p->breadth << endl;

    // dynamic allocate in heap
    // struct Rectangle *p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // c style
    Rectangle *p1 = new Rectangle; // c++ style
    p1->length = 15;
    p1->breadth = 7;
    cout << p1->length << endl;
    cout << p1->breadth <<endl;

    // free(p1); // c style
    delete p1; // c++ style
    
    return 0;
}