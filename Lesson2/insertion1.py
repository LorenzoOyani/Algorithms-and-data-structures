arr = [5,8,4,4,24,74,71,52,45]

for i in range(1, len(arr)):
    for j in range (0, i):
        if(arr[j] > arr[i]):
            temp = arr[i]
            k =i
            while(k > j):
                arr[k] = arr[k -1]
                k -=1
                arr[j] =temp
                print(arr)


