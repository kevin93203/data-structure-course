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
傳遞的參數會全部複製一分到function的stack中，