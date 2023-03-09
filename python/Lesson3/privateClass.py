class C(object):
    def __init__(self) -> None:
        self.c = 22

        self.__d = 30


class D(C):
    def __init__(self) -> None:
        self.e = 84
        C.__init__(self)


g = D()
print(g.d)
