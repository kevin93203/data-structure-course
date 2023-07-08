#include <iostream>

using namespace std;

void swap_pass_by_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_pass_by_address(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_pass_by_reference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int num1 = 10, num2= 15;
    swap_pass_by_value(num1,num2);
    cout << num1 << ", " << num2 << endl; // pass by value 不會影響

    swap_pass_by_address(&num1,&num2);
    cout << num1 << ", " << num2 << endl; // pass by address 會影響

    swap_pass_by_reference(num1,num2);
    cout << num1 << ", " << num2 << endl; // pass by reference 會影響
}