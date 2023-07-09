#include <iostream>



struct Rectangle
{
    int length; 
    int breadth;
    int array[5]; 
};

// pass by value
int areaOfRectangleByValue(Rectangle r){
    r.length = 15;
    r.array[0] = 100;
    return r.length * r.breadth;
}

// pass by address
int areaOfRectangleByAddress(Rectangle *r){
    r->length = 15;
    r->array[0] = 100;
    return r->length * r->breadth;
}

// pass by address
int areaOfRectangleByReference(Rectangle &r){
    r.length = 25;
    r.array[0] = 200;
    return r.length * r.breadth;
}



int main(){
    Rectangle r = {10,15,{1,2,3,4,5}};

    std::cout << r.length << ", " << r.breadth << ", " << r.array[0] << std::endl;
    
    std::cout << areaOfRectangleByValue(r) << std::endl;
    std::cout << r.length << ", " << r.breadth << ", " << r.array[0] << std::endl;
    
    std::cout << areaOfRectangleByAddress(&r) << std::endl;
    std::cout << r.length << ", " << r.breadth << ", " << r.array[0] << std::endl;
    
    std::cout << areaOfRectangleByReference(r) << std::endl;
    std::cout << r.length << ", " << r.breadth << ", " << r.array[0] << std::endl;
}