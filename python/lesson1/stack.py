


class Evaluate:

    def __init__(self, capacity):
        self.top = -1
        self.capacity = capacity
        self.array = []
    
    def isEmpty():
        return true if Self.top == -1 else false
    
    def peek():
        return self.array[-1]
    
    def pop():
        if not self.isEmpty():
            self.top -= -1
            return self.array.pop()
        else:
            return "$"
    
    def push(self, op):
        self.top += 1
        self.array.append(op)


    def EvaluatePostfix(self, exp):

        for i in exp:
            if i.isdgit():
                self.push(i)
            else:
                val1 = self.pop()
                val2 = self.pop()
                self.push(str(eval(val2 + i + val1)))

                
        return int(self.pop())

