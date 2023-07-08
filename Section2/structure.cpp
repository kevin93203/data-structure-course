#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length; // 4 bytes
    int breadth; // 4 bytes
    char x; //pick up 4 bytes but only use 1 byte -> 這叫做memory padding，這麼做是因為大小都一樣方便分配取用，但是會造成空間浪費
};


int main(){

    struct Rectangle r1={10,5};
    char x = {'a'}; // 1 byte
    printf("%d\n", sizeof(r1));
    printf("%d\n", sizeof(x));

    r1.x = 'x';
    cout << r1.x << endl;
    return 0;
}