class Node:
    def __init__(self, data):
        self.next = None
        self.prev = None
        self.data = data


class stack:
    def __init__(self):

        self.head = None
        self.tail = None

    def push(self, data):

        new_node = Node(data)
        if (self.head == None):
            self.head = new_node
            self.head.next = None
            self.head.prev = None
            self.tail = new_node

    def pop(self):
        if (self.head == None):
            print("stack underflow")

        if (self.head == self.tail):
            self.head = None
            self.tail = None
        else:
            node = self.tail
            self.tail = self.tail.prev
            del node
            self.tail.next = None

    def merge(self, stack):
        if stack.head == None:
            return
        if self.head == None:
            self.head = stack.head
            self.tail = self.tail
            return
        self.head.prev = stack.tail
        self.tail.next = stack.head
        self.head = stack.head

    def display(self):

        if (self.tail != None):
            n = self.tail

            while (n != None):
                print(n.data, end=" ")
                n = n.prev

            print()

        else:
            print("Stack Underflow")
