#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

void initialize (struct Rectangle *r, int length, int breadth){
    r->length = length;
    r->breadth = breadth;
}

int area (struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter (struct Rectangle r){
    return 2 * (r.length + r.breadth);
}


int main(){
    struct Rectangle r = {0,0};
    int length, breadth;
    

    printf("Enter length and breadth: ");
    scanf("%d %d",&length,&breadth);

    initialize(&r,length,breadth);
    printf("%d\n",area(r));
    printf("%d\n",perimeter(r));

    return 0;
}