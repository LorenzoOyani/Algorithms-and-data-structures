import random

filtered_List = list(random.randint(1, 1001) for i in range(1, 100))
print(list(filter((lambda x: x % 9 == 0), filtered_List)))
