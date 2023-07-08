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