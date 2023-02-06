class Node {
    constructor() {
        this.data;
        this.next;
    }
}

class myStack {
    constructor() {
        this.head = null
        this.tail = null
    }
}

function createStack() {
    var prototype = new myStack()
    return prototype;
}

function push(data, prototype) {
    var temp = new Node();
    temp.data = data;
    temp.next = prototype.head

    if(prototype.head == null) prototype.tail = temp;
    prototype.head = temp
}

function pop(prototype){
    if(prototype.head == null){
        console.log("stack underflow");
        return
    }
    else{
        var temp = prototype.head;
        prototype.head = prototype.head.next
        var popped = temp.data;
        delete temp;
        return popped
    }
   
}

function merge(ms1, ms2) {
    if(ms1.head == null){
        ms1.head = ms2.head
        ms1.tail = ms2.tail
        return
    }

    ms1.tail.next = ms1.head
    ms1.tail = ms2.tail
}

function display(prototype){
    temp = prototype.head;
    if(temp !=null){
        console.log(temp.data + " ");

    }
    temp = temp.next
}