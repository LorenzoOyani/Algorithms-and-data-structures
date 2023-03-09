

def mostFrequent(arr, n):

    max_count = 1
    current_count = 1
    res = arr[0]

    for i in range(1, n):
        if (arr[i] == arr[i - 1]):
            current_count += 1
        else: 
            current_count = 1

        if (current_count > max_count):
            max_count = current_count 
            res = arr[i - 1] 

    return res


arr = [40, 50, 30, 40, 50, 30, 30]
n = len(arr)
print(mostFrequent(arr, n))
