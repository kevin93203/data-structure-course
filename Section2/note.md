# memory
memory空間可大致分為以下三類:

- heap: 用來動態分配記憶體空間

- stack: 用來存放程式宣告的變數

- code section: 用來存放程式的指令


# pointer
pointer用來儲存一個變數的位址，用來間接存取data<br/>
Q: 為何需要間接存取data?

A:可獲取stack外面的資源 (heap, file, network...) 

# reference
reference就是一個變數的別名，跟pointer的差別在於pointer會占用空間去存放指向的變數位址(概念上是這樣，但是要看compiler如何實作)，reference不會

# function 
可以被呼叫的instructions集合

優點:
- 代碼重複使用
- 好維護

呼叫function時可傳遞參數，參數傳遞的方法可分為以下三種:
- Pass by value
- Pass by address
- Pass by reference (C語言沒有)

其中呼叫方的參數叫做actual parameters，被呼叫方的參數叫做formal parameters，且呼叫function時，會在memory中創建一個function的stack，function執行完後就會delete掉function stack

1.Pass by value

傳遞的參數會全部複製一分到function的stack中，function會分配新的記憶體空間給參數，且參數的值是複製的，所以改動function中的formal parameters不會影響actual parameters。

2.Pass by address

呼叫function時傳遞參數的記憶體位址，然後function中的參數是pointer，用來指向傳遞來的記憶體位址，藉以間接存取參數，所以改動function中的formal parameters會影響actual parameters。在C和C++中要傳遞array只能用Pass by address，但是如果array是包在struct裡面用Pass by value，則array也會使用Pass by value

3.Pass by reference

function中的參數是reference，完全不用另外分配記憶體空間給參數，所以改動function中的formal parameters會影響actual parameters，實現原理其實是compiler會把function的machine code直接複製貼上到呼叫函式的地方(inline function)，這樣執行function時就不會是在另一個stack的section中，也就是說全部都在同個stack section，就可以直接存取參數，但是此種做法會影響效率，因此不建議在複雜的function中使用Pass by reference，不過還是要看compiler的實際的實現方式，也有可能是把reference轉成pointer

# class
C和C++兩者只有C++有class，class跟structure很像，在C++中這兩者主要的不同是class是預設private，structure是預設public，在C裡，structure是不能放function，但是C++的class和structure都可以

# template
是C++用來實作generic的方法，可讓function或class支援不同type的參數