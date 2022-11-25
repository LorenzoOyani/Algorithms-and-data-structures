class Node{
    constructor(data){
        this.data = data;
        this.next = null
    }
}

function push(head, value){
    var newNode = new Node(value);
    newNode.next = head;
    head = newNode;
    return head;

}


function middleNode(start, last){
    var slow, fast;

    if(start == null)
            return null;
    slow = start;
    fast = start.next;
    while( fast != last){
        fast = fast.next;

        if(fast !=last){
            slow = slow.next;
            fast = fast.next;
        }
    }
    return slow;
}
// function to insert a node at the beginning
// of the Singly Linked List
function binarySearch(head, value){
    var start, last;
    start = head;
    last = null;

    do{
        var mid = middleNode(start, last);
        if(mid == null)
                return null;
        if(mid.data == value)
                return mid;
        else if(mid.data > value)
        {
            start = mid.next;

        }else{
            last = mid;
        }                
    }while(last ==null || last !=start);

        return null;
}

var head = null;
// Using push() function to
// convert singly linked list
// 10 -> 9 -> 8 -> 7 -> 4 -> 1
head.next = push(head, 1)
head.next = push(head, 4)
head.next = push(head, 7)
head.next = push(head, 8)
head.next = push(head, 9)
head.next = push(head, 10)

var value = 7;

let searchvalue = binarySearch(head, value);

if(searchvalue == null){
    document.write("not present");
} else{
    document.write("present");
}