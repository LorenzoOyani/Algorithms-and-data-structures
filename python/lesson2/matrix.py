matrix = [
    [1, 2, 3, 5],
    [5, 6, 7, 8, 9],
    [9, 10, 11, 12]
]

num = [[row[i] for row in matrix] for i in range(4)]
print(num)
