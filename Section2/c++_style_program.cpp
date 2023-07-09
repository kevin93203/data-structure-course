#include <stdio.h>

class Rectangle{
    //private 外部不能取得，只能透過public的function來間接獲取
    private:
        int length;
        int breadth;

    //public 外部可以取得    
    public:
        //以下都是function declaration(只宣告不實做function)

        //constructor，創建object時會自動呼叫的函式
        Rectangle ();
        
        //function(constructor) overloading，可以重複宣告和實作function，compiler會根據參數來決定要呼叫哪一個
        Rectangle (int length, int breadth);

        //destructor，當object的scope結束時會呼叫的函式，若有創建dynamic allocate的變數要記得在這邊刪除
        ~Rectangle();

        int area ();

        int perimeter ();

        // getter
        int getLength();

        int getBreadth();

        //setter
        void setLength(int length);

        void setBreadth(int breadth);
};


//function definition
Rectangle::Rectangle (){
    this->length = 0;
    this->breadth = 0;
}


Rectangle::Rectangle (int length, int breadth){
    this->length = length;
    this->breadth = breadth;
}

Rectangle::~Rectangle(){
}

int Rectangle::area ()
{
    return length * breadth;
}

int Rectangle::perimeter (){
    return 2 * (length + breadth);
}

int Rectangle::getLength(){
    return this->length;
}

void Rectangle:: setLength(int length){
    this->length = length;
}

int Rectangle:: getBreadth(){
    return this->breadth;
}

void Rectangle:: setBreadth(int breadth){
    this->breadth = breadth;
}



int main(){
    
    int length, breadth;
    

    printf("Enter length and breadth: ");
    scanf("%d %d",&length,&breadth);

    struct Rectangle r(length,breadth);

    printf("%d\n",r.area());
    printf("%d\n",r.perimeter());

    return 0;
}