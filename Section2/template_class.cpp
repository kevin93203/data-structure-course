#include <stdio.h>

template <class T>
class Rectangle{
    //private 外部不能取得，只能透過public的function來間接獲取
    private:
        T length;
        T breadth;

    //public 外部可以取得    
    public:
        //以下都是function declaration(只宣告不實做function)

        //constructor，創建object時會自動呼叫的函式
        Rectangle ();
        
        //function(constructor) overloading，可以重複宣告和實作function，compiler會根據參數來決定要呼叫哪一個
        Rectangle (T length, T breadth);

        //destructor，當object的scope結束時會呼叫的函式，若有創建dynamic allocate的變數要記得在這邊刪除
        ~Rectangle();

        T area ();

        T perimeter ();

        // getter
        T getLength();

        T getBreadth();

        //setter
        void setLength(T length);

        void setBreadth(T breadth);
};


//function definition
template <class T>
Rectangle<T>::Rectangle (){
    this->length = 0;
    this->breadth = 0;
}

template <class T>
Rectangle<T>::Rectangle (T length, T breadth){
    this->length = length;
    this->breadth = breadth;
}

template <class T>
Rectangle<T>::~Rectangle(){
}

template <class T>
T Rectangle<T>::area ()
{
    return length * breadth;
}

template <class T>
T Rectangle<T>::perimeter (){
    return 2 * (length + breadth);
}

template <class T>
T Rectangle<T>::getLength(){
    return this->length;
}

template <class T>
void Rectangle<T>:: setLength(T length){
    this->length = length;
}

template <class T>
T Rectangle<T>:: getBreadth(){
    return this->breadth;
}

template <class T>
void Rectangle<T>:: setBreadth(T breadth){
    this->breadth = breadth;
}



int main(){
    
    Rectangle<int> r1(10,20);

    printf("%d\n",r1.area());
    printf("%d\n",r1.perimeter());

    Rectangle<float> r2(10,20);

    printf("%f\n",r2.area());
    printf("%f\n",r2.perimeter());

    return 0;
}