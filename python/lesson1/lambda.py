import random

flipList = []

for i in range(1, 101):
    flipList +=random.choice(["H", "T"])

print("Heads :", flipList("H"))
print("Tails : ", flipList("T"))