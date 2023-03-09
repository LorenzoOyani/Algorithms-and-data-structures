class A(object):
    def function1(self):
        print('function of class A')


class B(A):
    def function1(self):
        print("function of class B")
        super(B, self).function1()


class C(B):
    def function1(self):
        print("function of class C")
        super(C, self).function1()


j = C
j.function1()
