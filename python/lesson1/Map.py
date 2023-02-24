oneTo10 = range(1, 11)

def double_num(num):
    return num *2

print(list(map(double_num, oneTo10)))
print(list(map(lambda x: x *3), oneTo10))
aList = list(map(lambda x, y: x * y), [1, 2, 3, 4], [1, 2, 3, 4])
print(aList)