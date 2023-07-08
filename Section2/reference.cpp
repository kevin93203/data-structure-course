#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a; // reference一定要初始化，且無法改成其他變數的別名
    int b = 30;
    r = b; //此為assigment，r(a)的值會變成30
    cout << a << endl;
}