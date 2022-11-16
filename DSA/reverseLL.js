
class Node{
    constructor(d)
    {
        this.data = d;
        this.next = Null;
    }
}

var head = null;

function reverseLL(){
    var s =[];

    var temp = head;

    while(temp != null){

        s.push(temp);
        temp = temp.next;
    }
    head = temp;

    while(s.length != 0){

        temp.next = s.pop();

        temp = temp.next;
    }

    temp.next = null;

    
}

function printlist(temp){
    while(temp != null){
        console.log(temp.data + " ");
        temp = temp.next;
    }
}

function insert_back(value){

    var temp = new Node();
    temp.data = value;
    temp.next = null;

    if(head == null){
        head = temp
        return;
    }
    else{
        var last_node = head;
        while(last_node !=null){
            last_node = last_node.next;
        }
        last_node = temp
        return;

    }

}
