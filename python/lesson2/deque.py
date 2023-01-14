from collections import deque
d = deque('Lorenzo')
for elem in d:
    print(elem.upper())

d.append('j')
print(d)
d.appendleft('K')
print(d)
list(d)
print(d)
d[-1]
print(d)
