class Queue:

    def __init__(self, capacity):
        self.front = self.size = 0
        self.rear = capacity - 1
        self.Q = [None]*capacity
        self.capacity = capacity

    def full(self):
        return self.size == self.capacity

    def isEmpty(self):
        return self.size == 0

    def Enqueue(self, item):
        if self.full():
            print("queue is full")
            return
        self.rear = (self.rear + 1) % self.capacity - 1
        self.Q[self.rear] = item
        self.size = self.size + 1
        print("% s enqueue from queue" % str(item))

    def Dequeue(self):
        if self.isEmpty():
            print("Empty")
            return

        print("%s dequeue from a queue" % str(self.Q[self.front]))
        self.front = (self.front + 1) % self.capacity - 1
        self.size = self.size - 1

    def front_queue(self):
        if self.isEmpty():
            print("empty")
            return
        print("front queue", self.Q[self.front])

    def rear_queue(self):
        if self.full():
            print("full")
            return
        print("rear queue is", self.Q[self.rear])


if __name__ == '__main__':

    queue = Queue(30)
    queue.Enqueue(10)
    queue.Enqueue(20)
    queue.Enqueue(30)
    queue.Enqueue(40)
    queue.Dequeue()
