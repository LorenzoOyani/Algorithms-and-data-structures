class Stack {
    size;
    top;
    array = []

    isEmpty() {
        let n = this.top < 0
        return n;
    }

    constructor(n) {
        this.size = n;
        this.top = - 1;
        this.array = new Array(this.size);
    }

    push(x) {
        if (this.top > this.size) {
            console.log("stackOverflow");
            return false;
        }
        else {
            this.array[this.top++] = x;
            return true;
        }
    }

    pop() {
        if (this.top < 0) {
            console.log("stackUnderflow");
            return 0;
        }
        else {
            let x = this.array[this.top--];
            return x;
        }
    }
}

function reverseString(str) {
    let n = str.length;
    let stack = new Stack(n);

    for (let i = 0; i < n; i++) {
        stack.push(str[i]);
    }

    for (let i = 0; i < n; i++) {
        stack = str[i].pop();
        str[i] = stack;
    }

}

let s = "Geeks";

s.split(" ");

reverseString(s);

console.log("reversed string: " + s.join(""));
