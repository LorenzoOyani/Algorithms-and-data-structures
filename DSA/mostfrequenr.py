

def mostFrequent(arr, n):
    arr.sort()

    maxcount = 1
    res = arr[0]
    curr_count = 1

    for i in range(1, n):
        if (arr[i] == arr[i - 1]):
            curr_count += 1
        else:
            curr_count = 1

        if (curr_count > maxcount):
            maxcount = curr_count
            res = arr[i - 1]

    return res


arr = [40, 50, 30, 40, 50, 30, 30]
n = len(arr)
print(mostFrequent(arr, n))
